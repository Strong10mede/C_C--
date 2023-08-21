#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int n, m, k;
    cin>>n;
    cin>>m;
    cin>>k;
    int a, b;
    cin >> a;
    cin >> b;
    vector<vector<int>> test(k);
    for(int i=0; i<k; i++){
        test[i].resize(2);
        cin >> test[i][0];
        cin>>test[i][1];
    }
    int answer = 0;
    for(int i=0; i<k;i++){
        int temp1=0, temp2 = 0;
        temp1 = test[i][0] - a;
        temp2 = test[i][1] - b;
        if((abs(temp1)+abs(temp2))%2==0){
            answer = 1;
            break;
        }
        
    }
    if(answer){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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