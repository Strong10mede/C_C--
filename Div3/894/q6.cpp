#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define SORTD(a) sort(a.begin(), a.end(), greater<ll>())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll w, f, n,sum=0;
    cin >> w >> f;
    cin >> n;
    vi s(n);
    FOR(i,0,n){
        cin >> s[i];
        sum += s[i];
    }
    vi dp(sum + 1, 0);
    dp[0] = 1;
    FOR(i,0,n){
        for (ll j = sum; j >= s[i];j--){
            if(dp[j-s[i]]){
                dp[j] = 1;
            }
        }
    }
    
    ll ans = 1e8;
    FOR(i,0,sum+1){
        if(dp[i]==0) continue;
        ll wt = ceil(i / (w*1.0));
        ll ft = ceil((sum - i) / (f * 1.0));
        ans = min(ans, max(wt, ft));
    }

    cout<<ans<<endl;
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
