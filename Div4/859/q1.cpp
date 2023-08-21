#include<bits/stdc++.h>
using namespace std;

void sol(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b)==c){
        cout << "+" << endl;
    }
    else{
        cout<<"-" << endl;
    }
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}