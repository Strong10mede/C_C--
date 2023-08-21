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
        FOR(i,0,n){
            cout << n << " ";
        }
    }
    else if(n==2){
        cout << 1 << " " << 3 << endl;
    }
    else{
        cout << 1 << " " << 3 <<" "<< endl;
        FOR(i,0,n-4){
            cout << 1 << " ";
        }
        cout << n / 2 << " " << n / 2 << endl;
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
