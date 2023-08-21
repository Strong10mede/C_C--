#include<bits/stdc++.h>
using namespace std;

void sol(){
int n;
cin >> n;
int sume = 0,sumo = 0;
vector<int> bag(n);
for(int i = 0; i < n;i++){
    cin >> bag[i];
    if(bag[i]%2==0){
        sume += bag[i];
    }
    else{
        sumo += bag[i];
    }
}

if(sumo<sume){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
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