#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;
    cin >> n;
    string str;
    vector<int> m(n), a, b, c;

    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> m[i];
        count = 0;
        cin >> str;
        for (int j = 0; j < 2; j++){
            if (str[j] == '1'){
                count++;
                if (j == 1){
                    b.push_back(m[i]);
                }
                else{
                    a.push_back(m[i]);
                }
                if (count == 2){
                    c.push_back(m[i]);
                }
            }
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    
    if (a.empty() || b.empty()){
        cout << "-1" << endl;
    }
    else{
        int ans = min(a[0] + b[0], c.empty() ? INT_MAX : c[0]);
        cout << ans << endl;
    }
}

int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++){
        sol();
    }
    return 0;
}
