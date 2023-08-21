#include<iostream>
#include<vector>
using namespace std;

string test_function(int length,vector<vector<char>> &args){
    string answer;
    int X=0;
    int O=0;
    int plus=0 ;
    if(args[0][0]==args[0][1]){
        if(args[0][0]==args[0][2]){
            if(args[0][0]=='X'){
                X++;
            }
            else if(args[0][0]=='+'){
                plus++;
            }
            else if(args[0][0]=='O'){
                O++;
            }           
        }
    }
    if(args[1][0]==args[1][1]){
        if(args[1][0]==args[1][2]){
            if(args[1][0]=='X'){
                X++;
            }
            else if(args[1][0]=='+'){
                plus++;
            }
            else if(args[1][0]=='O'){
                O++;
            }           
        }
        }
    if(args[2][0]==args[2][1]){
        if(args[2][0]==args[2][2]){
            if(args[2][0]=='X'){
                X++;
            }
            else if(args[2][0]=='+'){
                plus++;
            }
            else if(args[2][0]=='O'){
                O++;
            }           
        }
        }
    if(args[0][0]==args[1][0]){
        if(args[0][0]==args[2][0]){
            if(args[0][0]=='X'){
                X++;
            }
            else if(args[0][0]=='+'){
                plus++;
            }
            else if(args[0][0]=='O'){
                O++;
            }     
        }
    }if(args[0][1]==args[1][1]){
        if(args[0][1]==args[2][1]){
            if(args[0][1]=='X'){
                X++;
            }
            else if(args[0][1]=='+'){
                plus++;
            }
            else if(args[0][1]=='O'){
                O++;
            }     
        }
    }if(args[0][2]==args[1][2]){
        if(args[0][2]==args[2][2]){
            if(args[0][2]=='X'){
                X++;
            }
            else if(args[0][2]=='+'){
                plus++;
            }
            else if(args[0][2]=='O'){
                O++;
            }     
        }
    }if(args[0][0]==args[1][1]){
        if(args[0][0]==args[2][2]){
            if(args[0][0]=='X'){
                X++;
            }
            else if(args[0][0]=='+'){
                plus++;
            }
            else if(args[0][0]=='O'){
                O++;
            }     
        }
    }if(args[0][2]==args[1][1]){
        if(args[0][2]==args[2][0]){
           if(args[0][2]=='X'){
                X++;
            }
            else if(args[0][2]=='+'){
                plus++;
            }
            else if(args[0][2]=='O'){
                O++;
            }     
        }
    }

    if( X > O && X >plus){
answer = 'X';
return answer;
    }
    if( plus > O && X <plus){
answer = '+';
return answer;
    }
    if( X < O && O >plus){
answer = 'O';
return answer;
    }
    answer = "DRAW";
    return answer;
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        int length =3;
        vector<vector<char>> test_cases(length);
        for (int k = 0; k < length; k++) {
            test_cases[k].resize(3);
            for (int j = 0; j < 3; j++) {
                cin >> test_cases[k][j];
            }
        }
            
        string result = test_function(length, test_cases);
        cout << result << endl;
    }
   
    return 0;
}