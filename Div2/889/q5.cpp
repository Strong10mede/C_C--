#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    vector<int> val(n);
    for(int i=0; i<n; i++){
        cin >> val[i];
    }
    int victory = val[0];
    for (int i = 0;i<n;i++){
        if(val[i]==0){
            break;
        }
        victory = victory < val[i] ? val[i] : victory;
        int temp = 0;
        for(int j=i+1;j<=min(n-1,i+val[i]);j++){
            temp += val[j];
        }
        victory = victory < temp ? temp : victory;
        
    }

    cout<<victory<<endl;
}

int main(){
    int test =1;
    for(int i=0; i<test; i++){
        sol();
    }
    return 0;
}