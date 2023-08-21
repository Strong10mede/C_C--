#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max_value(int value) {
   
  int ans=0;
  while(value>0){
    ans += value;
    value/=2;
  }
  return ans;
}

int main() {
    int test_case;
    cin >> test_case;
    vector<int> test_cases(test_case);
    for (int i = 0; i < test_case; i++) {
    cin >> test_cases[i];
    }
    for (int i = 0; i < test_case; i++) {
        int result = max_value(test_cases[i]);

        cout << result << endl;
    }
    return 0;
}
