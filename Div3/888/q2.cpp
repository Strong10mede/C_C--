#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int n;
    cin >> n;
    vector<int> val(n);
    vector<int> val1(n);
    int no=0;
    for(int i = 0; i < n;i++){
        cin >> val[i];
        val1[i] = val[i];
    }
    sort(val1.begin(), val1.end());
    for(int i = 0; i < n; i++){
        if(val[i]%2 != val1[i]%2){
            no = 1;
            break;
        }
        
    }
    if(no){
        cout<<"NO" << endl;
    }else{
        cout<<"YES" << endl;
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