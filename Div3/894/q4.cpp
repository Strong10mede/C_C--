#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n;
    cin>>n;
    ll l=1,r=3e9,ans=0;
	while(l<=r){
		ll mid=l + (r-l)/2;
		if(mid*(mid-1)/2<=n)ans=mid,l=mid+1;
		else r=mid-1;
	}
    cout << ans + n - ans * (ans - 1) / 2 << endl;
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
