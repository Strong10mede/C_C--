#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void sol(){
    int length,diff;
    cin >> length;
    cin>>diff;
    vector<int> val(length);
    for(int i=0;i<length;i++){
        cin >> val[i];
    }
if(length==1){
        cout << 0 << endl;
}
else{
    sort(val.begin(), val.end());
    vector<int> diffs(length-1);
    for(int i=0;i<length-1;i++){
        if(val[i+1]-val[i]<=diff){
            diffs[i]=1;
        }
    }
    int max = 0;
    int count = 1;
    for(int j=0;j<length-1;j++){
        if(diffs[j]==1){
            count++;
        }
        else{
            count = 1;
        }
        if(max<count){
            max = count;
        }
    }

    cout<<length-max<<endl;

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