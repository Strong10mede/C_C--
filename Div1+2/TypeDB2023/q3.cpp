#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n,s;
    cin>>n>>s;
    ll temp;
    vi val(n),val1;
    FOR(i,0,n){
    cin >> val[i];
    if(i>0 && i<n-1){
        temp = val[i] - s;
        if(temp>s){
            val1.push_back(s);
            val1.push_back(temp);
        }
        else{
            val1.push_back(temp);
            val1.push_back(s);
        }
    }
    else{
    val1.push_back(val[i]);
    }
    }
    for(auto i: val1){
    cout << i << " ";
    }
    cout << endl;
    ll ans = 0;
    FOR(i,0,val1.size()){
        if(i < val1.size()-4){
            if(val1[i]!=min(val1[i],min(val1[i+1],val1[i+2]))){
            cout << val1[i] << " " << val1[i + 1] << endl;
            ans += val1[i] * val1[i + 1];
            cout << ans << endl;

            }
        else{
            ans += val1[i] * val1[i + 2];
            cout << val1[i] << " " << val1[i + 2] << endl;
            val1[i + 2] = val1[i + 1];
            cout << ans << endl;
        }
        i++;
        }
        else{
            if(val1[i]>val1[i+3]){
                ans += val1[i] * val1[i + 1];
                ans += val1[i + 2] * val1[i + 3];
            cout << ans << endl;

            cout << val1[i] << "  " << val1[i + 1] << endl;
            cout << val1[i+2] << "  " << val1[i + 3] << endl;

            }
            else{
                ans += val1[i] * val1[i + 2];
                ans += val1[i + 1] * val1[i + 3];
            cout << ans << endl;

                cout << val1[i] << " k " << val1[i + 2] << endl;
            cout << val1[i+1] << " k " << val1[i + 3] << endl;
            }
            break;
        }
        
    }


    cout << endl
         << ans << endl;
    
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
