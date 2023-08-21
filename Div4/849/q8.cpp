#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol(){
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n),v1(n),v2(n);
    ll count = 0,check=0;
    for(ll i=0;i<n;i++){
        cin >> v[i];
        v1[i] = v[i]+i + 1;
        v2[i] = v[i]+n - i;
    }
    vector<pair<ll,ll>> val;
    for(ll i = 0; i < n; i++){
        if(v1[i]>v2[i]){
val.push_back({v2[i],2});
        }
        else{
val.push_back({v1[i], 1});
        }
    }

    sort(val.begin(), val.end());
    
    ll minVal = pow(10,10),iterator=0;
    for(ll i=0; i < n; i++){
        if(val[i].second==1){
            minVal=min(minVal, val[i].first);
            if(minVal == val[i].first){
                iterator = i;
            }
        }
    }
    if(c<minVal){;
        if(c<*min_element(v1.begin(),v1.end())){
            cout<<0<<endl;
            return;
        }
        else{
            c -= *min_element(v1.begin(),v1.end());
            count++;
            val[distance(v1.begin(), min_element(v1.begin(), v1.end()))].first = pow(10, 10);
        }
        
    }
    else{
        count++;
        c -= minVal;
        val[iterator].first = pow(10, 10);
    }

    sort(val.begin(), val.end());
    for(ll i=0; i<val.size();i++){
        if(c>=val[i].first){
            count++;
            c-=val[i].first;
        }
        else{
            break;
        }
    }
    cout << count << endl;
}
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test;i++){
        sol();
    }
        return 0;
}