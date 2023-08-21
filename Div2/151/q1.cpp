#include<iostream>
#include<vector>
using namespace std;

int test_function(int length,vector<vector<int>> &args){
    int answer = 0;
    for (int i = 0;i<length;i++){
        if(args[i][0]>args[i][1]){
            answer++;
        }
    }
        return answer;
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        int length;
        cin >> length;
        vector<vector<int>> test_cases(length);
        for (int k = 0; k < length; k++) {
            test_cases[k].resize(2);
            for (int j = 0; j < 2; j++) {
                cin >> test_cases[k][j];
            }
        }
            
        int result = test_function(length, test_cases);
        cout << result << endl;
    }
   
    return 0;
}