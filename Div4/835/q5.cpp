#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    int n;
    cin >> n;
    vector<ll> v(n),b(n);
    ll cn = 0,cnto=0;
    for(ll i = 0; i < n;i++){
        cin>>v[i];
        if(v[i] ==0){
            cn++;
        }
    }
    for(ll i = 0; i < n; i++){
        if(v[i] ==0){
            cnto++;
        }
        b[i] = cn - cnto;
        if(b[i]<0){
            b[i] = 0;
        }
    }
    ll m = 0;
    for (ll i = 0; i < n;i++){
        if(v[i]==1){
            m += b[i];
        }
    }
    ll temp1 = 0;
    for(ll i = 0; i < n;i++){
        if(v[i]==0){
            temp1 = m+b[i]-i;
            break;
        }
    }
    ll temp2 = 0;
    for(ll i = n-1; i >= 0;i--){
        if(v[i]==1){
            temp2 = m-b[i]+n-cn-1;
            break;
        }
    }

    cout<<max(m,max(temp1,temp2))<<endl;
}

int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}