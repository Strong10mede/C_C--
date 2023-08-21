#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_maxSubArray(int n, vector<int>& a,vector<int> & b){
    vector<int> c;
    c.reserve(a.size() + b.size());
    c.insert(c.begin(), a.begin(), a.end());
    c.insert(c.begin() + n, b.begin(), b.end());
        sort(c.begin(), c.end());
    int maxLength = 0;
    int currentValue = c[0];
    int currentLength = 1;
     for (int i = 1; i < 2 * n; i++) {
         if (c[i] == currentValue)
         {
             currentLength++;
        } else {
            currentValue = c[i];
            currentLength = 1;
        }
        
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main(){
    int test_case;
    cin >> test_case;
    vector<vector<int>> test_casesA(test_case);
    vector<vector<int>> test_casesB(test_case);
    for (int i = 0; i < test_case;i++){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int j = 0; j < n;j++){
            cin >> a[j];
        }
        for (int j = 0; j < n;j++){
            cin >> b[j];
        }
        
            test_casesA[i] = a;
            test_casesB[i] = b;

    }
        for (int i = 0; i < test_case; i++)
        {
             int maxSubLength = find_maxSubArray(test_casesA[i].size(),test_casesA[i],test_casesB[i]);

             cout << maxSubLength;
             cout << endl;
        }
}