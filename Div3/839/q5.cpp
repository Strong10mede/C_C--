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
    vi val(n),wa(n),wb(n);
    ll w1 = 0, w2 = 0,all=0;
    FOR(i,0,n){
        cin >> val[i];
        if(val[i]!=i+1){
            wb[i] = 1;
        }
        if(val[i]!=n-i){
            wa[i] = 1;
        }
        if(wb[i]){
            w2++;
        }
        if(wa[i]){
            w1++;
        }
        if(wb[i] && wa[i]){
            all++;
        }

    }

    if(w1>=w2+all){
        cout << "First" << endl;
    }
    else if(w2>w1+all){
        cout<<"Second" << endl;
    }
    else{
        cout<<"Tie"<<endl;
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
