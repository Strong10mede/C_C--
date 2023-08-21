#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll n, m,up;
    cin >> n >> m;
    up = n;
    ll count2 = 0, count5 = 0, count=0;
    while(up%10==0){
        up /= 10;
    }
    while (up % 2 == 0) {
        count2++;
        up /= 2;
    }
    while (up % 5 == 0) {
        count5++;
        up /= 5;
    }
    ll milgaya = 1;
	bool ok = false;
  if(count2<=count5){
    for (ll i = count2; i < count5; i++)
  {
    if(milgaya*2<=m){
      ok = true;
      milgaya*=2;
    }
  }
  while(milgaya*10<=m){
    ok = true;
    milgaya*=10;
  }
  }else{
    for (ll i = count5; i < count2; i++)
  {
    if(milgaya*5<=m){
      ok = true;
      milgaya*=5;
    }
  }
  while(milgaya*10<=m){
    ok = true;
    milgaya*=10;
  }
  }
  ll times = m/milgaya;
  ll ans = times*milgaya*n;
  if(ok){
    cout<<ans<<endl;
  }else{
    cout<<n*m<<endl;
  }
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
