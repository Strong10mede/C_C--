#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n,k;
    cin >> n >> k;
    string s;
    cin>>s;
    map<ll, ll> m;
    ll ans = 0;
    FOR(i,0,n){
        m[s[i] - 'A']++;
    }
    FOR(i,0,26){
        ans += min(m[i], m[i + 32]);
        if(k>0 && abs(m[i] - m[i+32])/2){
            if(k>abs(m[i] - m[i+32])/2){
                ans += abs(m[i] - m[i + 32]) / 2;
                k = k - abs(m[i] - m[i + 32]) / 2;
            }
            else{
                ans += k;
                k = 0;
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}