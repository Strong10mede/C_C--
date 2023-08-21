#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n,m;
    cin >> n >> m;
    if(n>=m){
        for (int i = 0; i < 15;i++){
            int x = pow(3,i);
            int y = 1;
            if(n%x)
                break;
            for (int j = 0;j<=i;j++){
                if(n/x * y ==m){
                    cout << "YES" << endl;
                    return;
                }
                y *= 2;
            }
            
        }
    }
    

    cout << "NO" << endl;
    
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}