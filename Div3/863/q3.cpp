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
    vi val(n-1);
    FOR(i,0,n-1){
        cin>>val[i];
    }
    cout << val[0] << " ";
    FOR(i,0,n-2){
        cout << min(val[i], val[i + 1]) << " ";
    }
    cout << val[n - 2];
    cout<<endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}