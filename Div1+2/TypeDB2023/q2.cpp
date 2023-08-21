#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

bool compareSecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
    }
void sol(){
    ll n;
    cin>>n;
    vector<pii> v;
    FOR(i,2,sqrt(n)+1)
    {
        ll count = 0;
        while(n%i==0){
            count++;
            n = n / i;
        }
        if(count){
            v.push_back({i, count});
        }
    };
    if(n>1){
        v.push_back({n, 1});
    }

    ll ans = 0;
    sort(v.begin(), v.end(), compareSecond);


    for(int i = 0; i < v.size(); i++){
        if(v[i].second==0){
            continue;
        }
        ll temp = v[i].first;
        for (int j = i+1;j<v.size();j++){
            if(v[j].second==0){
                continue;
            }
            temp *= v[j].first;
            v[j].second -= v[i].second;
        }
        ans += temp * v[i].second;
        v[i].second = 0;
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
