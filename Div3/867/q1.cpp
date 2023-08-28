#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n, t;
    cin>>n>>t;
    vi a(n),b(n);
    ll ent = 0;
    ll k=-1;
    FOR(i,0,n){
        cin >> a[i];
    }
    FOR(i,0,n){
        cin >> b[i];
    }
    FOR(i,0,n){
        a[i] += i;
        if(a[i]<=t){
            if(ent<b[i])
                k = i + 1;
            ent = max(ent, b[i]);
        }
    }
    

    cout<<k<<endl;

}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}