#include<bits/stdc++.h>
using namespace std;

void answer(vector<int> &sum, vector<int> &arr, int n){
    int l, r, k;
    cin >> l >> r >> k;
    int total = sum[n];
    total = total - sum[r] + sum[l-1] + (l-r+1)*k;

    if(total%2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

void sol(){
    int n, q;
    cin>>n>>q;
    vector<int> arr(n+1,0),sum(n+1,0);
    for(int i=1; i<=n;i++){
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }
    for(int j=0; j<q;j++)
        answer(sum, arr, n);
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}