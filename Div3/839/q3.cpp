#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){

    ll k,n;
    cin>>k>>n;
    vi val(k,1);
    ll count = 1;
    FOR(i,1,k){
        val[i] = val[i-1] + count;
        count++;
        // if(val[i]>=n){
        //     val[i] = n -(k-i-1);
        // }
        if(val[i]>n-(k-i-1)){
            val[i] = val[i - 1] + 1;
        }
    }
    FOR(i,0,k){
        cout << val[i] << " ";
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
