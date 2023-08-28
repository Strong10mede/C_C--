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
    cin>>n;
    vi val(n);
    FOR(i,0,n){
        cin >> val[i];
    }
    SORT(val);
    cout << max((val[0] * val[1]), (val[n - 1] * val[n - 2])) << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}