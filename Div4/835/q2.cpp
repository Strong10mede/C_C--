#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int val = 0;
    for(int i=0; i<n; i++){
        val = max(val, int(str[i])-96);
    }
    cout << val << endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}