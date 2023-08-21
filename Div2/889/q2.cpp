#include<bits/stdc++.h>

using namespace std;

void sol(){
    long long int length;
    cin >> length;
    long long int count=0;
    for(long long int i=1; i<=length; i++){
        if(length%i==0){
            count++;
        }
        else{
            break;
        }
    }

    cout<<count<<endl;
    
};

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}