#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n, k;
    cin >> n >>k;
    string s,s1;
    cin >> s>>s1;
    map<char, ll> m, m1;
    vi val(n+1,0);
    FOR(i,0,n){
        m[s[i]]++;
        m1[s1[i]]++;
        if(s[i]!=s1[i]){
            val[i+1] = 1;
        }
    }

    for (auto entry : m) {
        if (m1[entry.first] != entry.second) {
            cout << "NO" << endl;
            return;
        }
    }
    FOR(i,1,val.size()){
        cout << val[i] << " ";
    }
    cout << endl;
    FOR(i,1,val.size()) {
        if(val[i]){
            if((val[i-1] || val[i+1]) && (val[i+3] || val[i+4])){

            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout <<"YES"<< endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}