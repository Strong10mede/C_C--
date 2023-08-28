#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(a, b, c) for(ll a = b;a<c;a++)
#define vi vector<ll>
void sol(){
    ll n;
    cin>>n;
    vi val(n);
    FOR(i,0,n){
        cin >> val[i];
    }
    sort(val.begin(),val.end());
    ll l = 0, r = 1e9 + 5;
    ll mid;
    ll ans = 0;
    while(l<=r){
        mid = l + (r - l) / 2;
        ll j = 0,cnt=0;
        FOR(i,0,n){
            if(val[i]-val[j]>2*mid){
                j = i;
                cnt++;
            }          
        }
        if(cnt>=3){
            l = mid + 1;
        }
        else{
            ans = mid;
            r = mid - 1;
        }
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