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
    if(n%2){
        n += 1;
        ll k = n / 2;
        FOR(i,0,n+1){
            if(k==n || i==0){
                k++;
                continue;}
            if(k==n+1){
                cout << n + 1 + n / 2 << " ";
                k++;
            }
            else{
            cout << k << " ";
            k++;
            }
            
        }
    }
    else{
        ll k = n / 2;
        FOR(i,0,n+1){
            if(k==n){
                k++;
                continue;}
            cout << k << " ";
            k++;
        }
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
