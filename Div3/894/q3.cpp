#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
using ll = int64_t;
#define space " | "


void Solution(ll number) {

    int n;
	cin>>n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++)
	{
		cin>>arr[i+1];
	}
	if(arr[1] != n){
		cout<<"NO"<<endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if(arr[i+1]>n){
			cout<<"NO"<<endl;
			return;
		}
	}
	
	vector<int> ans(n+1);
	int last = 1;
	for (int i = n; i >= 1; i--)
	{
		for(;last<=arr[i];last++){
            ans[last] = i;
		}
		
	}
	for (int i = 1; i <= n; i++)
	{
		if(ans[i]!=arr[i]){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	
	
	
	
	
	
    
}


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll tc=1; 
    cin >> tc; 
	for (ll i = 0; i < tc; i++)
	{
		Solution(i+1);
	}
    return 0;
}
