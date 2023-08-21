#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    vi pref(n + 1, 0), nxt(n + 1, 0), lst(n + 1, 0);
    str = '#' + str;
    FOR(i,1,n+1){
        pref[i] = pref[i - 1] + str[i] - '0';
    }
    nxt[n] = n + 1;
    for (int i = n - 1; i >= 1; i--) {
        if (str[i] != str[i + 1]) nxt[i] = i + 1;
        else nxt[i] = nxt[i + 1];
    }
    lst[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (str[i] != str[i - 1]) lst[i] = i - 1;
        else lst[i] = lst[i - 1];
    }
    set < pair < int, int > > Q;
    for (int i = 1; i <= m; i++) {
        int l, r;
        cin >> l >> r;
        int v = pref[r] - pref[l - 1];
        if (v == r - l + 1 || !v) {
            Q.insert({0, 0});
            continue;
        }
        if (str[l] == '0') l = nxt[l];
        if (str[r] == '1') r = lst[r];
        if (l > r) Q.insert({0, 0});
        else Q.insert({l, r});
    }
    cout << Q.size() << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;
    FOR(i,0,test){
        sol();
    }

    return 0;

}
