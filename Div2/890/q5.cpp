#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 5005;
vector<int> tree[MAX_N];
int dp[MAX_N][MAX_N];

int f(int a, int u) {
    // Implement your LCA algorithm here or use any available library.
    // For simplicity, I'm assuming you have a function lca(u, v) that returns the LCA of vertices u and v.
    // This function should have a time complexity of O(log n).
    return lca(a, u);
}

void dfs(int u, int p) {
    dp[u][0] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[u][i] = f(a[i], u);
        for (int v : tree[u]) {
            if (v != p) {
                for (int j = 0; j < i; ++j) {
                    dp[u][i] = max(dp[u][i], dp[v][j] + f(a[i], u));
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    // Read the tree edges.
    for (int i = 2; i <= n; ++i) {
        int p;
        cin >> p;
        tree[p].push_back(i);
        tree[i].push_back(p);
    }

    // Read the permutation.
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    dfs(1, 0);

    // Find the maximum value of f(a) over all permutations.
    int max_f = 0;
    for (int i = 1; i <= n; ++i) {
        max_f = max(max_f, dp[1][i]);
    }

    cout << max_f << endl;

    return 0;
}
