#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, x;
    cin >> n >> x;
    vi val(n+1);
    if(n%x!=0){
        cout << -1 << endl;
        return;
    }
    FOR(i,1,n+1){
        val[i] = i;
    }
    val[1] = x;
    while(x!=n){
        ll y = x * 2;
        while(n%y!=0){
            y += x;
        }
        val[x] = y;
        x = y;
    }
    val[n] = 1;
    val.erase(val.begin());
    FOR(i,0,n){
        cout << val[i] << " ";
    }
    cout << endl;
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
