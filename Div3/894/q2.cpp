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
    vi val(n),ans;
    ll count = 0;
    for(ll i = 0; i < n;i++){
        cin >> val[i];
        if(i>0 && val[i]<val[i-1]){
            ans.push_back(val[i]);
            ans.push_back(val[i]);
        }
        else{
            ans.push_back(val[i]);
        }
    }
    cout<<ans.size()<<endl;
    FOR(i,0,ans.size()){
        cout << ans[i] << " ";
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
