#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long int
#define mii map<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
#define pii pair<int,int>
#define ff first
#define ss second
#define pb push_back
#define pob pop_back
#define mod 1000000007
#define inf 1e14
#define all(a) a.begin(),a.end()
#define FOR(a, c) for (int a = 0; a < c; a++)
#define FORL(a, b, c) for (int a = b; a <= c; a++)
#define endl "\n"
void solve()
{
   int n,k;
   cin>>n;
   vi arr(n,0),cnt(n+1,0);
   int id =0;
   FORL(i,1,n-1){
    cin>>arr[i];
    if(arr[i]-arr[i-1]>n){
        id= arr[i]-arr[i-1];
        continue;
    }
    cnt[arr[i]-arr[i-1]]+=1;
   }
   int a = 0,b =0;
   for(int i=1;i<=n;i++){
    if(cnt[i]==0){
        if(a==0) a = i;
        else if(b==0) b = i;
        else{
            cout<<"NO"<<endl;
            return;
        }
    } 
   }
   if(b==0 and cnt[a]==0){
    cout<<"YES"<<endl;
    return;
   }
   if(a+b<=n and cnt[a+b]==2){
    cout<<"YES"<<endl;
    return;
   }
   else if(a+b>n and id==a+b){
    cout<<"YES"<<endl;
    return;
   }
   cout<<"NO"<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t =1;
    cin>>t;
    while(t--) solve();
    return 0;
}