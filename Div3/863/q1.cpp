#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n,d;
    string s;
    cin>>n>>d;
    cin >> s;
    bool flag = true;
    FOR(i,0,n){
        if(d>(s[i]-'0') && flag==true){
            cout << d;
            flag = false;
        }
        cout << s[i];
    }
    if(flag)
        cout << d;

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