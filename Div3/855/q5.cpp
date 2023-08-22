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
    string s;
    cin >> n;
    cin >> s;
    s = '#' + s +'#';
    ll ans = 0;
    for (int i = 2;i+1<=n;i++)
    {
        if(s[i-1]!=s[i+1]){
            ans++;
        }
        
    }
    ans++;
    cout<<ans<<endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}