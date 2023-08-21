#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, s, r;
    cin >> n >> s >> r;
    vi v(n);
    ll t = s - r;
    v[0] = (s - r);
    ll m = r / (n-1);
    ll d = r % (n-1);
    FOR(i,1,n){
        if(d>0){
        v[i] = m + 1;
        d--;
        }
        else{
        v[i] = m;
        }
            
    }

    FOR(i,0,n){
        cout << v[i] << " ";
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
