#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    int count = n;
    string str;
    cin >> str;
    for(int i=0; i<n/2; i++){
        if(str[i]!=str[n-1-i]){
            count = count - 2;
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