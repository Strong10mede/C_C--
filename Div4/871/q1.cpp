#include<bits/stdc++.h>
using namespace std;

void sol(){
    vector<char> d(10);
    int count = 0;
    string str = "codeforces";
    for (int i = 0; i < 10;i++){
        cin >> d[i];
        if(d[i]!=str[i])
        count++;
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