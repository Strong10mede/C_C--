#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    string str;
    cin >> str;
    FOR(i,0,str.size()){
        if(str[i]=='Y' && (str[i+1]=='s' || str[i+1]=='Y')){
            cout << "NO" << endl;
            return;
        }
        if(str[i]=='e' && (str[i+1]=='e' || str[i+1]=='Y')){
            cout << "NO" << endl;
            return;
        }
        if(str[i]=='s' && (str[i+1]=='s' || str[i+1]=='e')){
            cout << "NO" << endl;
            return;
        }
        if(str[i]!='Y' && str[i]!='s' && str[i]!='e'){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
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
