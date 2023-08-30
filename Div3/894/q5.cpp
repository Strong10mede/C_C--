#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, m, d;
    cin >> n >> m >> d;
    vi val(n+1),cum(n+1);
    ll sum = 0,ans=0;
    priority_queue<int, vector<int>, greater<int>> pq;
    FOR(i,1,n+1){
        cin >> val[i];
        if(val[i]>0){
            sum += val[i];
            pq.push(val[i]);
        }
        if(pq.size()>m){
            sum -= pq.top();
            pq.pop();
        }
        ans = max(ans, sum - 1LL * d * i);
    }
    
    cout << ans<<endl;

    
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
