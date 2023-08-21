

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void run_case(){

  int n; 
  cin>>n;
  int ober=0;
  for(int i=0; i<26; ++i){
    ober=0;
  }
  for(int i=1; i<=26; ++i){
    if(n%i!=0) {
      ober = i;
      break;
    }
  }
  string s ="";
  for(int i=1; i<=n; ++i)
    s += ('a'+i%ober);

    cout<<s<<endl;
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
run_case();
    }
        
    return 0;
}