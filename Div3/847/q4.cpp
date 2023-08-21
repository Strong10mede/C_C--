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
    cin >> n;
    vi val(n);
    ll ans = 0,temp=0,t=-1;
    FOR(i,0,n){
        cin >> val[i];
    }
    SORT(val);
    map<ll, ll> a;

    for(auto num : val){
        a[num]++;
    }

    

    for(const auto& i : a){
        if(t!=i.first-1){
        temp=0;
        }
        if(i.second>temp){
        ans+=i.second-temp;
        }
        t = i.first;
        temp = i.second;
    }

    cout<<ans<<endl;
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
