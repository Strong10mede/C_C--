#include<bits/stdc++.h>
using namespace std;

void sol(){
    int length;
    cin >> length;
    vector<char> val(length);
    for(int i = 0; i < length;i++){
        cin >> val[i];
    }
    bool broke = false;
    for (int i = 0;i<length-1;i++){
        char c = val[i];
        for (int j = i+1;j<length;j++){
            if(c==val[j]){
                if((i+j)%2){
                    cout << "NO" << endl;
                    broke = true;
                    break;
                }
            }
        }
        if(broke){
            break;
        }
    }
    if(!broke){
        cout<<"YES"<<endl;
    }
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;
}