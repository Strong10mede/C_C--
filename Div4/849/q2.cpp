#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int x = 0,y = 0;
    for (int i = 0;i<n;i++){
        if(str[i]=='L'){
            x = x - 1;
        }
        else if(str[i]=='R'){
            x = x + 1;
        }
        else if(str[i]=='U'){
            y = y + 1;
        }
        else if(str[i]=='D'){
            y = y - 1;
        }

        if(x==1 && y==1){
            cout << "YES" << endl;
            return;
        }
    }

    cout<<"NO" << endl;

}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}