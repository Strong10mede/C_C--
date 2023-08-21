#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll m, sum;
    cin >> m >> sum;
    ll sumr = 0;
    vi val(m),total(51,0);
    FOR(i,0,m){
        cin>>val[i];
        total[val[i]] += 1;
        if(total[0]){
            cout << "NO" << endl;
            return;
        }
        if(total[i]>=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    ll count = 0;
    FOR(i,1,51){
        if(total[i]==0){
            sum -= i;
            if(sum>=0){
                count++;
                total[i] = 1;
            }
        }
        if(sum==0){
            break;
        }
        if(sum<0){
            cout<<"NO"<<endl;
            return;
        }
    }

    FOR(i,1,count+m+1){
        if(total[i]==0){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;


    
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
