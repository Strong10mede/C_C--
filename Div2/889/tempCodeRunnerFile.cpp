#include<bits/stdc++.h>
using namespace std;

void bs(int arr[],int n, int target){
    int s = 0;
    int e = n - 1;
    int mid = s+(e - s) / 2;
    while(s<=e){
        //Base case
        if(arr[mid]==target){
            cout << mid;
            break;
        }
        else if(arr[mid]>target){
            e = mid - 1;
        }else if(arr[mid]<target){
                s = mid + 1;}
        
        mid = s + (e - s) / 2;
    }
}

int main(){
    int arr[8] = {0,1,2,3,4,5,6,7};
    bs(arr, 8, 12);
    return 0;
}