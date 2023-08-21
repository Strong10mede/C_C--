#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void sol(){
    vector<vector<char>> val(8);
    string str;
    for(int i=0; i<8;i++){
        val[i].resize(8);
        for(int j=0; j<8;j++){
            cin >> val[i][j];
            if(val[i][j]>=97 && val[i][j]<=122){
                str+=val[i][j];
            }
        }
    }
    cout<<str<<endl;
}

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}