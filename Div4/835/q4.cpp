#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll n;
    cin >> n;
    vector<ll> val;
    int count = 0;
    ll temp = 0;
    val.push_back(pow(10, 10));
    for(int i = 0; i < n;i++){
        cin >> temp;
        if(temp!=val.back()){
            val.push_back(temp);
        }
    }
    val.push_back(pow(10, 10));
    
    for(int i=1;i<val.size()-1;i++){
        if(val[i]<val[i-1]){
            if(val[i]<val[i+1]){
                count++;
            }
        }
    }
    cout << (count ==1 ? "YES": "NO")<< endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}