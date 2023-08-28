#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(a, b, c) for(ll a = b;a<c;a++)
#define vi vector<ll>
void sol(){
ll n,k,q;
cin >>n>>k>>q;
vi val(n);
ll ans = 0;
ll count=0;
FOR(i,0,n){
    cin >> val[i];
    if(val[i]<=q ){
        count++;
    }
    else{
        if(count>=k) ans += ((count-k+1) * (count - k + 2)) / 2;
        count = 0;
    }
}
if(count){
    if(count>=k) ans += ((count-k+1) * (count - k + 2)) / 2;

}
cout << ans << endl;
}

int main(){
int t;
cin>>t;
while(t--){
    sol();
}
    return 0;
}