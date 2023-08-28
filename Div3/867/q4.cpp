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
    cin >> n;
    vi val(n);
    ll t = (n * (n + 1)) / 2;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    else if(t%n){
        cout << n << " ";
        ll t1 = 2;
        ll t2 = n - 1;
        while(t1<=n-2 && t2>=1){
            cout << t2 << " ";
            cout << t1 << " ";
            t2 -= 2;
            t1 += 2;
        }
        if(t2>=1){
            cout << t2;
        }
        
        
    }
    else{
        cout << -1 << endl;
        return;
    }
    cout << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}