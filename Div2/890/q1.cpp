#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n;
    cin>>n;
    vi val(n),val1(n);
    ll ans = 0,count = 0;

    FOR(i,0,n){
        cin>>val[i];
    }
    val1 = val;
    SORT(val1);
    
    FOR(i,0,n){
        if(val[i]!=val1[i]){
            ans = max(ans,max(val[i], val1[i]));
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
