#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n, m;
    cin>>n>>m;
    vector<string> v(n);
    int flag = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
    };
    for(int i=0;i<m;i++){
        for (int j = 0;j<n;j++){
            if (v[j][i] == 'v' && flag==0){
                flag++;
                break;
            }
            if (v[j][i] == 'i' && flag==1){
                flag++;
                break;
            }
            if (v[j][i] == 'k' && flag==2){
                flag++;
                break;
            }
            if (v[j][i] == 'a' && flag==3){
                flag++;
                break;
            }
        }
    }

    if(flag==4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
