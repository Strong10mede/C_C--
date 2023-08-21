#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void sol(){
    int n,k;
    cin >> n>>k;
    vector<int> val(n);


    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    int no = 0;
    int a =0,b=0;

   for(int i=0;i<n;i++){
    if(a<k){
        if(val[i]==val[0]){
            a++;
        }
    }
    
    else if(a>=k){
        if(val[i]==val[n-1]){
            b++;
        }
    }
   }

   if(a>=k){
    if(b>=k || val[0]==val[n-1]){
        no = 1;
    }
   }


    if(no){
        cout<<"YES" << endl;
    }else{
        cout<<"NO" << endl;
    }

}

int main(){
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}