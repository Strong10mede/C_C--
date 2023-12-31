#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    priority_queue<int> q;
    ll n;
    cin >> n;
    ll val;
    ll ans = 0;
    FOR(i,0,n){
        cin >> val;
        if(val){
            q.push(val);
        }
        else{
            if(q.size()){
                ans+=q.top();
                q.pop();
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