#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> make_all_negative(const vector<int>& arr) {
   int largest_num = *max_element(arr.begin(), arr.end());
   int smallest_num = *min_element(arr.begin(), arr.end());
 
   if(largest_num == 0 && smallest_num == 0){
      return vector<pair<int, int>>(0);
   }
 
   if(smallest_num >= 0){
      return vector<pair<int, int>>(0);  
   }
 
   vector<pair<int,int>> steps;
   int smallest_index = min_element(arr.begin(), arr.end()) - arr.begin();
   while(abs(smallest_num) < abs(largest_num)){
      smallest_num *= 2;
      steps.push_back({smallest_index + 1, smallest_index + 1});
   }

   for (int i = 0; i < arr.size();i++)
   {
      if(arr[i] > 0){
         steps.push_back({i + 1, smallest_index + 1});     
      }
   }

   return steps;
}
 
vector<pair<int, int>> make_all_positive(const vector<int>& arr) {
   int largest_num = *max_element(arr.begin(), arr.end());
   int smallest_num = *min_element(arr.begin(), arr.end());
 
   if(largest_num == 0 && smallest_num == 0){
      return vector<pair<int, int>>(0);
   }
 
   if(largest_num <= 0){
      return vector<pair<int, int>>(0);  
   }
 
   vector<pair<int,int>> steps;
   int largest_index = max_element(arr.begin(), arr.end()) - arr.begin();
   while(abs(largest_num) < abs(smallest_num)){
      largest_num *= 2;
      steps.push_back({largest_index + 1, largest_index + 1});
   }

   for (int i = 0; i < arr.size(); i++)
   {
      if(arr[i] < 0){
         steps.push_back({i + 1, largest_index + 1});     
      }
   }

   return steps;
}

void sol() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> steps_for_positive = make_all_positive(arr);
      vector<pair<int, int>> steps_for_negative = make_all_negative(arr);
 
 
      if(steps_for_positive.size() <= steps_for_negative.size()){
         cout << steps_for_positive.size() + arr.size() - 1 << '\n';
         for (int i = 0; i < steps_for_positive.size();i++)
         {
         cout << steps_for_positive[i].first << ' ' << steps_for_positive[i].second << '\n';
         }
         for (int i = 1; i < arr.size();i++)
         {
         cout << i + 1 << ' ' << i << '\n';
         }
      }
      else{
         cout << steps_for_negative.size() + arr.size() - 1 << '\n';

         for (int i = 0; i < steps_for_negative.size(); i++)
         {
            cout << steps_for_negative[i].first << ' ' << steps_for_negative[i].second << '\n';
         }
         for(int i = arr.size(); i >= 2; i--){
            cout << i - 1 << ' ' << i << '\n';  
         }  
      }
    
    

    
}


int main() {
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        sol();
    }
    return 0;
}
