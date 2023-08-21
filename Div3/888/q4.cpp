#include<iostream>
#include<vector>
#include<algorithm>
#define int long long int
#define FOR(a, c) for (int a = 0; a < c; a++)
#define FORL(a, b, c) for (int a = b; a <= c; a++)
using namespace std;

void sol(){
  int n,k;
   cin>>n;
   vector<int> arr(n,0),cnt(n+1,0);
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
   if(b==0 && cnt[a]==0){
    cout<<"YES"<<endl;
    return;
   }
   if(a+b<=n && cnt[a+b]==2){
    cout<<"YES"<<endl;
    return;
   }
   else if(a+b>n && id==a+b){
    cout<<"YES"<<endl;
    return;
   }
   cout<<"NO"<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}