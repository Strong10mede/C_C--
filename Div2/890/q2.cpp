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
    vi val(n);
    ll sum1 = 0, sumr = 0;
    FOR(i,0,n){
        cin >> val[i];
        if(val[i]==1){
            sum1 += val[i];
        }
        else{
            sumr += val[i] -1;
        }
    }

    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    else if(sum1>sumr){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
