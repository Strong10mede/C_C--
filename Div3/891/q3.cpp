#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;

void sol(){
    int t = 500;
    for (int i = 0;i<t;i++){
        i++;
    }
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    set<int> st;
    for (int i = 0; i < n * (n - 1) / 2; ++i)
    {
        int x;
        cin >> x;
        st.insert(x);
        mp[x]++;
  }
  
  vector<int> v;
  vector<int> ans;
  for(auto i:st) v.push_back(i);

  while(--n){
    int j = 0;
      int curr = v[j];
    do{
      curr = v[j];
      j++;
    }
    while(mp[curr]<n);
    
      mp[curr]-=n;
      ans.push_back(curr);
    
    
    
  }
  
    for(int i:ans) cout<<i<<" ";
    cout<<v[v.size()-1]<< " ";
    cout<<endl;
  return; 
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;
    FOR(i,0,test){
        sol();
    }

    return 0;

}