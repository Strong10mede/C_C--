#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
bool compare(ll a, ll b) {
    return a > b; // Compare in descending order
}
ll test_function(ll length,vector<vector<ll>> &args,ll time, ll ques){
    vector<ll> result(length);
    for (ll i = 0;i<length;i++){
        ll curTime = time;
        ll penalty = 0;
        ll sum = 0;
        ll point = 0;
        ll answer = 0;
        sort(args[i].begin(),args[i].end());
        for (ll j = 0; j < ques;j++){
            if(curTime >= args[i][j]){
                sum += args[i][j];
                curTime = curTime - args[i][j];
                penalty =  penalty + sum;
                point++;
            }
            
        }
        answer = point*100000000 - penalty;
            result[i] = answer;
        }

        ll check = result[0];
        sort(result.begin(), result.end(),compare);
for(ll i = 0; i <length;i++){
        if (check == result[i])
        {
            return i+1;
    }
}
}
int main(){
    
    int test_case;
    cin>>test_case;
    for(int i=0; i<test_case;i++){
        ll length;
        cin >> length;
        ll ques;
        cin >> ques;
        ll time;
        cin >> time;
        vector<vector<ll>> test_cases(length);
        for (ll k = 0; k < length; k++) {
            test_cases[k].resize(ques);
            for (ll j = 0; j < ques; j++) {
                cin >> test_cases[k][j];
            }
        }
            
        ll result = test_function(length, test_cases,time, ques);
        cout << result << endl;
    }
   
    return 0;
}