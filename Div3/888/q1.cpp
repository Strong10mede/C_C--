#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int n,m,k,H;
    cin>>n>>m>>k>>H;
    vector<int> val(n);
    int count = 0;
    for (int i = 0; i < n;i++){
        cin >> val[i];
        if(abs(val[i]-H)!=0){if(abs(val[i]-H)%k==0){
if(abs(val[i]-H)<=(m-1)*k){
    count++;
}
        };
}
        
    }
    cout<<count<<endl;
}

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}