#include<bits/stdc++.h>
using namespace std;

void linear(vector<int> &a, int temp){
    for (int i = 0;i<a.size();i++){
        if (temp == a[i]) {
                cout << "Found";
                return;
            }
    }
    cout<<"Not Found"<<endl;
}

void binary(vector<int> &a, int temp){
    sort(a.begin(), a.end());
    int l = 0;
    int r = a.size();
    while(l<=r){
    int m = l + (r - l) / 2;
        if(a[m]==temp){
                cout << "Found" << endl;
                return;
        }
        if(a[m]>temp){
                r = m - 1;
        }
        else if(a[m]<temp){
                l = m + 1;
        }
    }
    cout << "Not found" << endl;
}

int main(){
    vector<int> a;
    int n;
    cout << "Size of a vector ";
    cin >> n;
    a.resize(n);
    int i = 0;
    while(n--){
        cin >> a[i];
        i++;
    }

    int temp;
    cout << "Search element : ";
    cin >> temp;
    cout << "Put choice 1 or 2 : ";
    int c;
    cin >> c;
    switch(c){
        case 1 :
        linear(a, temp);
        break;
        case 2 : binary(a, temp);
        break;
        default:
        cout << "Please select 1 or 2";
    }
}