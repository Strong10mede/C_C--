#include<bits/stdc++.h>

using namespace std;

void sol(){
    int length;
    cin >> length;
    int count = 0;
    vector<int> val(length);
    for(int i=0; i<length;i++){
        cin >> val[i];
        if(i+1 == val[i]){
            count++;
        }
    }

    cout<<(count+1)/2<<endl;
};

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}