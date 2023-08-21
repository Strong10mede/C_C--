#include<iostream>
#include<vector>
using namespace std;

vector<int> test_function(int length){
    vector<int> result(length);
    if(length ==1){
        result[0] = 1;
        return result;
    }
    else if(length ==2){
        result[0] = 2;
        result[1] = 1;
        return result;
    }
    else if(length ==3){
        result[0] = 2;
        result[1] = 1;
        result[2] = 3;
        return result;
    }
    else{
        result[0] = 2;
        result[length/2] = 1;
        result[length-1] = 3;
        int temp = 4;
        for (int i = 1; i < length-1;i++){
            if(i!=length/2){
            result[i] = temp;
            temp++;
            }
            
        }

        return result;

    }
        
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        int length;
        cin >> length;

        vector<int> result = test_function(length);
        for(int i=0; i<result.size();i++){
            cout << result[i]<<" ";
        }
        cout << endl;
    }
   
    return 0;
}