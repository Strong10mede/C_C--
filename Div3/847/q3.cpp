#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

bool compareSecond(const pair<int, int>& a,const pair<int, int>& b) {
    return a.second < b.second;
}
void sol(){
    ll n;
    cin>>n;
    ll t = n * (n - 1);
    vi v(t), sum(n,0);
    FOR(i,0,t){
        cin>>v[i];
    }

    set <ll> val(v.begin(),v.end());
    vector<pii> res(n);
    ll i = 0;
    for( auto num : val){

        FOR(j,0,t){
            if(num==v[j]){
                sum[i] += j % (n - 1);
            }
        }
        res[i]= {num, sum[i]};
        i++;
    }
    sort(res.begin(), res.end(),compareSecond);

    for(auto p : res){
        cout << p.first << " ";
    }

    cout << endl;
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
