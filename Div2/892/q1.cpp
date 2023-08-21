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
    vi a(n);
    vi b, c;
    FOR(i,0,n){
        cin >> a[i];
    }
    SORT(a);
    set<ll> val(a.begin(),a.end());
    map<ll, ll> values;
    if(val.size()==1){
        cout << "-1" << endl;
    }
    else{
        for(auto num: a){
            values[num]++;
        }
        cout << values[values.begin()->first] << " " << a.size() - values[values.begin()->first] << endl;
        ll count = 0;
        for (ll i = 0; i < values[values.begin()->first]; i++) {
            cout << values.begin()->first << " ";
            count++;
        }
        cout << endl;
        FOR(i,count,n){
            cout << a[i] << " ";
        }
        cout<<endl;
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
