#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    ll length;
    cin >> length;
    string s;
    cin >> s;
    ll flag=0;
    ll yes = 0;
    FOR(i,0,length){
            if((s[i]=='M' || s[i]=='m') && yes>1){flag=1;break;}
			if((s[i]=='M' || s[i]=='m')){yes=1;continue;}
			if((s[i]=='E' || s[i]=='e') && (yes>2 || yes<1)){flag=1;break;}
			if((s[i]=='E' || s[i]=='e')){yes=2;continue;}
			if((s[i]=='O' || s[i]=='o') && (yes>3 || yes<2)){flag=1;break;}
			if((s[i]=='O' || s[i]=='o')){yes=3;continue;}
			if((s[i]=='W' || s[i]=='w') && (yes>4 || yes<3)){flag=1;break;}
			if((s[i]=='W' || s[i]=='w')){yes=4;continue;}
			flag=1;
			break;
    }
    if(flag || yes!=4){
            cout << "NO" << endl;
    }
    else{
        cout <<"YES" << endl;
    }
    
}
int main(){
    int test;
    cin >> test;
    while(test--){
        sol();
    }
    return 0;
}