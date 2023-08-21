#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    vector<int> vals(3);
    for(int i=0; i<3; i++){
        cin >> vals[i];
    }

    if(vals[0]+vals[1]>=10){
        cout << "Yes" << endl;
    }
    else if(vals[1]+vals[2]>=10){
        cout << "Yes" << endl;
    }
    else if(vals[0]+vals[2]>=10){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


}

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}