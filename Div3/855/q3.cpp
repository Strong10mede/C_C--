#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll length;
    cin >> length;
    vi val(length), nonzero;
    ll ans = 0;
    FOR(i,0,length){
        cin >> val[i];
        if(val[i]) nonzero.push_back(val[i]);
        SORT(nonzero);
        if(val[i]==0 && !nonzero.empty()){
            ans += nonzero.back();
            nonzero.pop_back();
        }
    }
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