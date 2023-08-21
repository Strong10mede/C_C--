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
    cin>>n;
    ll sum = 0;
    vi temp(n+1,0);
    for (ll j = 1; j <= n - 1;j++)
    {
        ll t = 0;
        for (ll i = 1; i <= n - j-1;i++)
        {
            temp[i]= i * i;
            t = i;
        }
        for (ll m = 1; m <= j+1;m++){
            temp[t + m] = (t + m) * (n - m + 1);
        }

        SORT(temp);
        ll total = 0;
        FOR(i,1,temp.size()-1){
            total += temp[i];
        }

        sum = max(total, sum);
    }

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
