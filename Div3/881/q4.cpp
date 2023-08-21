#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
const int maxn = 3e5 + 100;
ll n;
int a[maxn];
vi val[maxn];

void dfs(ll v,ll ptr){
    bool ok = 1;
    a[v] = 0;
    for(ll to : val[v]){
        if(to == ptr) continue;
        dfs(to, v);
        ok = 0;
        a[v] += a[to];
    }
    a[v] += ok;
}
void sol(){
   cin >> n;
   FOR(i,1,n){
       ll u, v;
       cin >> u >> v;
       val[u].push_back(v);
       val[v].push_back(u);
   }
   dfs(1, 0);
   ll m;
   cin >> m;
   FOR(i,0,m){
       ll x, y;
       cin >> x >> y;
       cout << a[x] * 1ll * a[y] << endl;
   }

   FOR(i,1,n+1){
       val[i].clear();
   }
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
