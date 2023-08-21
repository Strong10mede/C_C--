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
    FOR(i,0,n){
        cin >> val[i];
    }
    if(n==1){
        cout << "0" << endl;
        return;}
    ll count = 0;
    for(ll i = 0; i < n-1; i++) {
        int maxi= val[i]>val[i+1]?i:i+1;
        int max= val[maxi];
        int mini= val[i]<val[i+1]?i:i+1;
        int min = val[mini];

        for(ll j = i+1; j < n; j++) {
            if(val[j]<min){
                min = val[j];
                 mini = j;
            }
            if(val[j]>max){
                 max = val[j];
                 maxi = j;
            }
            if(mini<maxi){
                count++;
            }
            // cout<<i<<" "<<minidx<<" "<<maxidx<<endl;
        }
    }

    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        sol();

    return 0;

}
