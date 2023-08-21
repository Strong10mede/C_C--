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
   vi val(n);
   
   FOR(i,0,n){
       cin >> val[i];
   }
   if(n==1){
    cout<<0<<endl;
    return;
   }
   else{
    SORT(val);
    ll k = n / 2;
    ll sum1 = 0, sum2 = 0;
    FOR(i,0,k){
        sum1 += val[i];
    }
    k = n % 2 ? k + 1 : k;
    FOR(i,k,n){
        sum2 += val[i];
    }
    cout<<sum2-sum1<<endl;
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
