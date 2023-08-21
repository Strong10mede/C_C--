#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int length;
    cin >> length;
    int max=0;
    int index = 1;
    vector<int> val(length);

    vector<int> quality(length);
    for(int i=0; i<length;i++){
        cin >> val[i];
        cin >> quality[i];
        if(max<quality[i] && val[i]<=10){
            max = quality[i];
            index = i + 1;
        }
    }

    cout<<index<<endl;

}

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}