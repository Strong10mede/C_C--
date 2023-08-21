#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin>>n;
    vector<int> v(n),a(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    a = v;
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        if(v[i]!=a[n-1]){
            v[i] -= a[n - 1];
        }
        else{
            v[i] -= a[n - 2];
        }
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}