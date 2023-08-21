#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void sol(){
ll n;
cin >> n;
vector<ll> v(n+1,0),sum(n+1,0);
bool ans = true;
for(ll i = 1; i <= n;i++){
    cin >> v[i];
}
sort(v.begin(),v.end());
for(ll i =1; i<=n;i++){
    sum[i] = sum[i-1]+v[i];
    sum[0] = 1;
    if(sum[i-1]<v[i]){
        ans = false;
    }
}
if(ans){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}