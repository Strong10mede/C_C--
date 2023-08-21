#include <iostream>
#include <vector>
using namespace std;

int decrypt(int money, int length) {

    int sum = 1;
    for (int i = 0; i < length; i++) {
        int price = 1 << i;
        sum += price;
        if(sum>money){
            return money + 1;
        }
    }

    return sum;
}

int main() {
    int test_case;
    cin >> test_case;
    vector<vector<int>> test_cases(test_case, vector<int>(2));

    for (int i = 0; i < test_case; i++) {
        int money, length;
        cin >> money >> length;
        test_cases[i][0] = money;
        test_cases[i][1] = length;
    }

    for (int i = 0; i < test_case; i++) {
        int result = decrypt(test_cases[i][0], test_cases[i][1]);
        cout << result << endl;
    }

    return 0;
}
