#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max_value(int length, vector<int>& test) {
 bool flag=0;
  for(int i=0; i<length; ++i) {
    if(test[i]<0) flag=1;}
  int sum=0, count=0;
 
  
  for(int i=0; i<length; ++i){
    sum += abs(test[i]);
  }
 
  if(flag)
  for(int i=0; i<length; ++i){
    if(test[i]<0){
      ++count;
      while(test[i++]<=0);
      --i;
    }
  }

  cout<<sum <<" "<<count<<endl;

}

int main() {
    int test_case;
    cin >> test_case;
    vector<vector<int>> test_cases(test_case);
    for (int i = 0; i < test_case; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        test_cases[i] = a;
    }
    for (int i = 0; i < test_case; i++) {
        max_value(test_cases[i].size(), test_cases[i]);

    }
    return 0;
}
