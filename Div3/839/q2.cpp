#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    vi v(4);
    FOR(i,0,4){
        cin >> v[i];
    }
    ll count = 0;

    if(v[0]>= v[1] && v[2]>=v[3]){
        count++;
    }
    else if(v[0]<= v[1] && v[2]<=v[3]){
        count++;
    }

    if(v[0]>= v[2] && v[1]>=v[3]){
        count++;
    }
    else if(v[0]<= v[2] && v[1]<=v[3]){
        count++;
    }

if(count/2){
        cout << "YES" << endl;
        return;
}

cout<<"NO" << endl;

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
