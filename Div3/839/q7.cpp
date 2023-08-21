#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, x, y,x1;
    cin >> n >> x >> y;
    x1 = x;
    vi val(n);
    FOR(i,0,n){
        cin >> val[i];
    }
    SORT(val);
    ll ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
       
        if(x == y) break;
        
        if(val[i] <= x){
            x++;
            ans++;
            j++;
        } else break;
    }
    if(x == y){
        cout << ans << endl;
        return;
    }
    if(n - j >= j){
        cout << "-1\n";
        return;
        
    }
    x = x1;
    ans = 0;
    while(y>x){
        FOR(i,0,n){
            if(x>=val[i]){
                x++;
                ans++;
            }
            else{
                x--;
                ans++;
            }
            if(x==y){
                break;
            }
        }
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
