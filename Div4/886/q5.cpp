#include<bits/stdc++.h>
// #include<vector>
// #include<algorithm>
// #include<cmath>
#define ll long long int
using namespace std;

// long long int findPositiveIntegerRoot(__int128 a, __int128 b, __int128 c) {

//     __int128 discriminant = b * b - 4 *a * c;

//     if (discriminant >= 0) {
//         long double root1 = (-b + sqrtl(discriminant)) / (2 * a);
//         long double root2 = (-b - sqrtl(discriminant)) / (2 * a);

//         // Check which root is positive and convert it to a long long int
//         if (root1 >= 0) {
//             return static_cast<long long int>(root1);
//         } else if (root2 >= 0) {
//             return static_cast<long long int>(root2);
//         } else {
//             // Both roots are negative or complex, return -1 to indicate no positive integer root
            
//             return -1;
//         }
//     } else {
//         // Discriminant is negative, no real roots, return -1
//         return -1;
//     }
// }

void sol(){
    // long long int length;
    // long long int area;
    // cin>>length>>area;
    // __int128 a = 0;
    // __int128 b = 0,c = 0;
    // vector<long long int> paint(length);
    // for(int i=0;i<length;i++){
    //     cin>>paint[i];
    //     a += 4;
    //     b += paint[i] * 4;
    //     c += paint[i] * paint[i];
    // }

    // c = c - area;
    // cout<<findPositiveIntegerRoot(a,b,c)<<endl;
    ll n, c; cin>>n>>c;
    ll arr[n];
    for(ll i=0; i<n; ++i){
        cin>>arr[i];
        
    }
    ll ans=1, l=0, r=1e9;  __int128 sum=0;
    while(l<r){
        ll w=(l+r)/2;
        sum = 0;
        for(int i=0; i<n; ++i){
        sum += (arr[i]+w)*(arr[i]+w);
        }
        if(c<sum){
        r=w-1;
        }else{
        l=w+1; ans=w;
        }
    }
    cout<<(ans+1)/2<<endl;
}

int main(){

    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}