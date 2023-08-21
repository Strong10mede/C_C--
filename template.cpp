#include<iostream>
#include<vector>
using namespace std;

int test_function(int length, vector<int> &args){
    return length;
}
int main(){
    
    int test_case;
    cin>>test_case;
    vector<vector<int>> test_cases(test_case);
    for(int i=0; i<test_case;i++){
        int length;
        cin>>length;
        test_cases[i].resize(length);
        for (int j = 0;j<length;j++){
            cin>>test_cases[i][j];
        }
    }
    for(int i=0; i<test_case;i++){
        int result = test_function(test_cases[i].size(), test_cases[i]);
        cout<<result<<endl;
    };
    return 0;
}