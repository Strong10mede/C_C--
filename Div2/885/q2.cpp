#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int n;
    cin>>n;
    int sum = 0;
    int answer = 0;
    vector<int> a(n), b(n),c(n);
    for(int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n;i++){
        cin >> b[i];
    }
    while(sum){
        for(int i = 0; i < n;i++){
        c[i]=abs(a[i]-b[i]);
    }
    b = c;
    a = b;
    for()
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