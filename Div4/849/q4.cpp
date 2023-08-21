#include<bits/stdc++.h>
using namespace std;

void sol(){
    string str = "codeforces";
    char c;
    cin >> c;
    for (int i = 0; i < 10;i++){
        if(c==str[i]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}