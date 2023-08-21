#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    long long int sum = 0,count = 0;
    vector<int> v(n,0);
    for(int i = 0; i < n;i++){
        cin >> v[i];
        sum += abs(v[i]);
        if(v[i]<=0){
            count++;
        }
        v[i]=abs(v[i]);
    }
if(count%2){
    sort(v.begin(),v.end());
    sum = sum - 2*abs(v[0]);
}
    cout<<sum<<endl;

}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}