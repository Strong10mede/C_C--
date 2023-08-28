#include<bits/stdc++.h>
using namespace std;
 
const int Maxn = 300005;
 
int n, m;
char str[Maxn];
vector <int> neigh[Maxn];
int tk[Maxn];
vector <int> seq;
int dp[Maxn];
vector<int> X, Y;
int res;
 
bool findLoop(int v)
{
	if (tk[v] == 2) return false;
	if (tk[v] == 1) return true;
	tk[v] = 1;
	for (int i = 0; i < neigh[v].size(); i++)
		if (findLoop(neigh[v][i])) return true;
	tk[v] = 2;
	seq.push_back(v);
	return false;
}
 
int main()
{
	scanf("%d %d", &n, &m);
	scanf("%s", str + 1);
    for (int i = 0;i<m;i++){
        int a;
        cin >> a;
        X.push_back(a);
    }
    for (int i = 0; i < m;i++){
        int b;
        cin >> b;
        Y.push_back(b);
    }
    for (int i = 0; i < m; i++)
        {
            int a=X[i], b=Y[i];
            neigh[a].push_back(b);
        }
	for (int i = 1; i <= n; i++) if (!tk[i])
		if (findLoop(i)) { printf("-1\n"); return 0; }
	for (char let = 'a'; let <= 'z'; let++)
		for (int i = 0; i < seq.size(); i++) {
			int v = seq[i];
			int my = str[v] == let;
			dp[v] = my;
			for (int j = 0; j < neigh[v].size(); j++)
				dp[v] = max(dp[v], dp[neigh[v][j]] + my);
			res = max(res, dp[v]);
		}
	printf("%d\n", res);
	return 0;
}