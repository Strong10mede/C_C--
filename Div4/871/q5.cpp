#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &vis, int &sum){
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j] || grid[i][j] == 0) return;

    vis[i][j] = 1;

    sum += grid[i][j];
    dfs(i-1, j, grid, vis, sum);
    dfs(i, j - 1, grid, vis, sum);
    dfs(i, j + 1, grid, vis, sum);
    dfs(i+1, j, grid, vis,sum);
}

void sol(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n,vector<int>(m,0));
    for (int i = 0; i < n;++i){
        for (int j = 0; j < m;++j)
            cin >> grid[i][j];
    }

     vector<vector<int>> vis(n,vector<int>(m,0));
     int maxSum = 0;
     for (int i = 0; i < n; ++i)
     {
        for(int j = 0; j < m;++j){
            if(vis[i][j] == 0){
                int sum = 0;
                dfs(i, j, grid, vis, sum);
                maxSum = max(maxSum,sum);
            }
        }
    }

    cout<<maxSum<<endl;
}

int main(){
    int test;
    cin >> test;
    for(int i = 0; i <test;i++){
        sol();
    }
    return 0;

}