#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll b,c,h;
    cin >> b >> c >> h;
    ll fill = c+h;
    if(b == min(b, fill)){
        cout << b + b - 1 << endl;
        return;
    }
    else if(fill == min(b, fill)){
        cout << fill + fill + 1 << endl;
        return;
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
