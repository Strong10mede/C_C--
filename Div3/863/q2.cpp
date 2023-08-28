#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;
    a = a > n / 2 ? n - a + 1 : a;
    b = b > n / 2 ? n - b + 1 : b;
    c = c > n / 2 ? n - c + 1 : c;
    d = d > n / 2 ? n - d + 1 : d;
    cout << abs(min(a,b)-min(c,d)) << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}