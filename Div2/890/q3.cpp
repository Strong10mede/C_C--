#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
   ll n,k;
   cin>>n>>k;
   vi val(n);
   ll h = 0;
   FOR(i,0,n){
    cin>>val[i]; 
   }
   vector<pii> num;
   FOR(i,0,n-1){
    if(val[i]<=val[i+1]){
        num.push_back({val[i+1],val[i+1]-val[i]});
    }
   }
   FOR(i,0,num.size()){
    cout<<num[i].first<<" "<<num[i].second<<endl;
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
