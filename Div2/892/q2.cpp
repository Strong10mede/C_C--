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
    vii val(n);
    vector<pii> t1;
    FOR(i,0,n){
        ll temp = 0;
        cin >> temp;
        val[i].resize(temp);
        FOR(j,0,temp){
            cin >> val[i][j];
        }
        SORT(val[i]);
        t1.push_back({val[i][1], val[i][0]});
    }
    ll sum = 0;
    SORT(t1);
    for(ll i = n-1;i>=1;i--){
        sum += t1[i].first;
    }
    sort(t1.begin(),t1.end(),compareSecond);
    sum += t1[0].second;

    cout<<sum<<endl;
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
