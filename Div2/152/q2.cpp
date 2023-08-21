#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
bool compareFirst(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first > b.first;
}
void sol(){
    int n, k, x;
    cin >> n >> k;
    vector < pair < int, int > > a;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        x %= k;
        if (!x) x = k;
        a.push_back({-x, i});
    }
    sort(a.begin(), a.end());
    for (auto key : a) cout << key.second << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        sol();
    }

    return 0;
}
