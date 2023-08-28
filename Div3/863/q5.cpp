#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    string ans;
   ll b[] = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    ll n;
    cin >> n;
	ans = "";
	while (n) {
		ans.push_back(b[n % 9] + '0');
		n /= 9;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}