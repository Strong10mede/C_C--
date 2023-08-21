#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int test_function(int length,vector<vector<int>> &args,int time, int ques){
    vector<int> result(length);
    int answer = 0;
    for (int i = 0;i<length;i++){
        int curTime = time;
        int penalty = 0;
        int point = 0;
        sort(args[i].begin(),args[i].end());
        for (int j = 0; j < ques;j++){
            if(curTime > args[i][j]){
                curTime = curTime - args[i][j];
                penalty += args[i][j];
                point++;
                answer = point*1000 - penalty;
            }
            result[i] = answer;
        }
        }

        int check = result[0];
        sort(result.begin(), result.end());
for(int i = 0; i <length;i++){
    if(check == result[i]){
            return i;
    }
}
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        int length;
        cin >> length;
        int ques;
        cin >> ques;
        int time;
        cin >> time;
        vector<vector<int>> test_cases(length);
        for (int k = 0; k < length; k++) {
            test_cases[k].resize(ques);
            for (int j = 0; j < ques; j++) {
                cin >> test_cases[k][j];
            }
        }
            
        int result = test_function(length, test_cases,time, ques);
        cout << result << endl;
    }
   
    return 0;
}