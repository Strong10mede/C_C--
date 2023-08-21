#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
void sol(){
    int n;
    cin >> n;
    vector<int> val(n+1,0),sum(n+1,0);
    bitset <N> vis;
    for(int i=1; i<=n; i++){
        cin >> val[i];
        sum[i] = sum[i - 1] + val[i];
    }
    vis[0] = true;
    int victory = 0;
    for (int i = 1; i <= n;i++){
        if(vis[0]){
            victory = max(victory, sum[i] + 1 - i);
        }
        vis |= (vis << val[i]);
        vis >>= 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (vis[i - 1]) {
            victory = max(victory, sum[n] - i - n + 1);
    }
  }

        cout << victory << endl;
}

int main(){
    int test =1;
    for(int i=0; i<test; i++){
        sol();
    }
    return 0;
}