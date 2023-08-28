#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

ll mul(ll b){
    return b * (b - 1) * (b - 2);
}
void sol(){
    ll n;
    cin>>n;
    vi val(n);
    map<ll, ll> cnt;
    FOR(i,0,n){
        cin >> val[i];
        cnt[val[i]]++;
    }
    ll res = 0;
    for(auto & num : cnt){
        res += mul(num.second);
        for (int64_t i = 2; num.first*i*i <= 1e6; i++) {
	        if (cnt.count(num.first*i) && cnt.count(num.first*i*i)) {
	        res += ((int64_t) num.second) * cnt[num.first*i] * cnt[num.first*i*i];
	        }
        }
    }
    cout<<res<<endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}