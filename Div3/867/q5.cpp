#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2){
        cout << -1 << endl;
        return;
    }
    else{
        vi cnt1(26), cnt2(26);
        FOR(i,0,n/2){
            if(s[i]==s[n-i-1]){
                cnt1[s[i]-'a']++;
            }
        }
        FOR(i,0,n){
            cnt2[s[i]-'a']++;
        }
        ll ss = accumulate(cnt1.begin(), cnt1.end(), 0);
        ll mx=0, mx2 = 0;
        for(auto i : cnt2){
            mx2 = max(mx2, i);
        }
        if(mx2>n/2){
            cout << -1 << endl;
            return;
        }
        else{
            for(auto i : cnt1){
                mx = max(mx, i);
            }
            if(mx+mx>ss){
                cout << mx << endl;
            }
            else{
                cout << ss / 2 + (ss & 1) << endl;
            }
        }
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}