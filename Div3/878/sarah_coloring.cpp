#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max_value(int length, vector<int>& test) {
    int sum = 0;
  
  sort(test.begin(),test.end());
  for(int i=0; i<length/2; ++i){
    sum += test[length-i-1]-test[i];
  }
    return sum;
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
        int result = max_value(test_cases[i].size(), test_cases[i]);

        cout << result << endl;
    }
    return 0;
}
