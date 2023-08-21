#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll n, c, d;
    cin >> n >> c >> d;
    int check = 0;
    vector<ll> v(n),v1(n),sum(d+1,0);
    for(ll i = 0; i < n;i++){
        cin >> v[i];
    }
    v1 = v;
    sort(v1.begin(), v1.end(),greater<ll>());
    sort(v.begin(), v.end());
    for (ll i = 0; i < min(d,n);i++){
        sum[i+1] = sum[i]+v1[i];
    }
    if (c <= sum[min(n,d)])
        {
            cout << "Infinity" << endl;
            return;
        }
    else if (c > v[n - 1] * d)
        {
            cout << "Impossible" << endl;
            return;
        }
        ll maxii = 0;
        for (ll i = d - 1; i >= 1;i--)
        {
            ll sumr = 0;
            if(i>min(n,d)){
                sumr = sum[min(n, d)];
            }
            else{
                sumr = sum[i];
            }

            ll rem = d % i;
            ll quo = d / i;
            ll fsum = 0;
            if(rem>0){
                ll patanahi;
                if(rem>min(n,d)){
                    patanahi = sum[min(n, d)];
                }
                else{
                    patanahi = sum[rem];
                }
                fsum = quo*sumr + patanahi;
            }
            else{
                fsum = quo * sumr;
            }

            if(fsum>=c){
                maxii = i - 1;
                break;
            }
        }
    
    cout<<maxii<<endl;
        
        
}

int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}