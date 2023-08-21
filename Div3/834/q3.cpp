#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (int a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll l, r, x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;
    if(abs(a-b)==0){
        cout<<0<<endl;
        return;
    }else if(abs(a-b)>=x){
        cout<<1<<endl;
        return;
    }else{
        if((abs(b-l)>=x) || (abs(b-r)>=x)){
            if((abs(a-l)>=x) && (abs(a-r)>=x)){
                cout<<2<<endl;
                return;
            }
            if((abs(a-l)>=x) || (abs(a-r)>=x)){
 
            }else{
                cout<<-1<<endl;
                return;
            }
            if(abs(a-l)>=x){
                a = l;
            }else if(abs(a-r)>=x){
                a = r;
            }
            if(abs(a-b)>=x){
                cout<<2<<endl;
                return;
            }else{
                cout<<3<<endl;
                return;
            }
 
        }else{
            cout<<-1<<endl;
            return;
        }
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
