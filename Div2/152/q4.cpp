#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,0,n) cin>>arr[i];
    int ch = 0,cnt =0;
    bool nd =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            if(ch==0 and nd==0) ch = 1;           
            if(ch==-1) ch+=1;
            if(nd==0) nd = 1,cnt+=1;
                
            continue;
        }
        if(arr[i]==2){
            if(nd==0) nd = 1,cnt+=1;
            if(ch<1) ch=1;
            continue;
        }
        if(arr[i]==0){
            nd =0;
            if(ch>0){
                ch = 0;
                continue;
            }
            if(ch==0 and (i==n-1 or arr[i+1]==0)){
                cnt+=1;
                continue;
            }
            if(ch==0 and i<n-1 and arr[i+1]>0){
                ch=-1;
                continue;
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
        sol();
    

    return 0;

}
