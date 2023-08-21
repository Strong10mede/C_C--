#include<iostream>
#include<algorithm>
using namespace std;
using ll = int64_t;
void Solution() {
    

    ll n, d, h;
    cin >> n >> d >> h;
    ll arr[n];
    double area = 0.0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
  }
  sort(arr, arr+n);
 
  for(ll i=1; i<n; ++i){
    if(arr[i]-arr[i-1]>=h){
        area += double((h*d)/2.0);
    }else{
        double k= h-(arr[i]-arr[i-1]), r;
        r = arr[i]-arr[i-1];
        k *= d;
        k /= h;
        area += ((r)*(d+k))/2.0;
    }
  }
  area += double((h*d)/2.0);
  cout<<area<<endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  for(int i=0; i<t; i++)
  Solution();

  return 0;
}
