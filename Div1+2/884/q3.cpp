#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int max_value(vector <long long int> & args, int length) {
    long long int sum1 = 0, sum2 = 0;
    int t = 0;
    for(int i = 0; i < length;i++){
        if(args[i]>0){
            if(i%2){
                sum1+=args[i];
            }
            else if(i%2==0){
                sum2+=args[i];
            }
            }
        else{
            t++;
        }
    }
    if(t==length){
        sort(args.begin(),args.end());
        return args[length - 1];
    }
    return sum1>sum2?sum1:sum2;
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        int length;
        cin>>length;
        vector<long long int> test(length);
        
        for (int j = 0;j<length;j++){
            cin>>test[j];
        }
        long long int result = max_value(test,length);
        cout<<result<<endl;
        }
   
    return 0;
}