#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    string str;
    cin>>str;
    vi val;

    for (ll i = str.size() - 1;i>=0;i--){
        val.push_back(str[i] - '0');
    }
   

    ll j = -1;
    FOR(i,0,val.size()){
        if(val[i]>=5){
            j = max(i,j);
            val[i] = 0;
            if(i==val.size()-1){
                val.push_back(1);
            }
            else{
                if(val[i+1]!=9){
                    val[i+1] += 1;
                }

            }
        }
    }


    for(ll i = 0; i < j;i++){
        val[i] = 0;
    }
    for(ll i=val.size()-1; i>=0; i--){
        cout << val[i];
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
