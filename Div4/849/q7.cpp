#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    int count = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        v[i] += i + 1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
if(c>=v[i]){
    count++;
    c= c-v[i];
}
else{
    break;
}
    }
 
    cout << count << endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}