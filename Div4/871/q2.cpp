#include<bits/stdc++.h>
using namespace std;

void sol(){
    int length;
    cin>>length;
    vector<int> val(length+1);
    val[length] = 2;
    int count = 0;
    int temp = 0;
    for(int i=1; i<=length; i++){
        cin>>val[i];
        if(!val[i]){
        if(!val[i-1]){
            temp++;
            count = count<temp? temp:count;

        }
        else{
            temp = 1;
            count = count<temp? temp:count;

        }}
        else{
            count = count<temp? temp:count;
            temp = 0;
        }

    }
    cout<<count<<endl;
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}