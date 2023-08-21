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
    vi v(n);
    FOR(i,0,n){
        cin >> v[i];
    }

    ll nmin = 1e9;
    ll nmax = 0;
    for (int i = n - 1; i >= 1;i--){
        if(v[i]<v[i-1]){
            ll ras = v[i]+ (v[i-1] - v[i]+1)/2;
            nmax = max(ras, nmax);
        }
        else if(v[i] > v[i-1]){
            ll ras = v[i-1] + (v[i] - v[i-1]) / 2;
            nmin = min(ras, nmin);
        }
    }
    if(nmin>=nmax){
        cout << nmax << endl;
    }
    else{
        cout << "-1" << endl;
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
