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
   ll sum = 0;
   int flag = 0,count = 0;
   FOR(i,0,n){
       cin >> val[i];
       sum += abs(val[i]);
       if(val[i]<0 && flag==0){
           flag = 1;
       }
       else if(val[i]>0 && flag==1){       
            count++;
            flag = 0;
       }
   }

   if(flag){
    count++;
   }

   cout<<sum<<" "<<count<<endl;

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
