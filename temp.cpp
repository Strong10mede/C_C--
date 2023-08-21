#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l;
    cin >> n;
    string str;
    cin >> str;
    int temp = 0;
    vector<int> v(n, 1), size;
    for (int i = 0;i<str.length();i++){
        if(str[i] == ' '){
            v[i] = 0;
            size.push_back(temp+1);
            temp = 0;
        }
        else{
            temp++;
        }
        if(i==str.length()-1){
            size.push_back(temp);
        }
    }
    cin >> l;
    for(auto num : size){
        cout<<num<<endl;
    }
    vector<vector<char>> val;
    
}