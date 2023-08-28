#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &a){
    for(int i = 0; i < a.size();i++){
        for(int j = 0; j < a.size()-i;j++){
            if(a[j]>a[j+1]){
                std::swap(a[j],a[j+1]);
            }
        }
    }
}

void mergeSort(vector<int> &a, int l,int mid, int r){
    int n1 = mid -l + 1;
    int n2 = r - mid;
    vector<int> L(n1), M(n2);
    for(int i=0; i<n1; i++){
        L[i] = a[l + i];
    }
    for(int i=0; i<n2; i++){
        M[i] = a[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k] = M[j];
        j++;
        k++;
    }

}
void merge(vector<int>& a, int l,int r){
    if(l>=r){
        return;
    }
    int mid = l + (r - l) / 2;
    merge(a, l, mid);
    merge(a, mid + 1, r);
    mergeSort(a, l, mid, r);
}

void insertion(vector<int>& a){
int n = a.size();
int key, j;
for (int i = 1; i < n;i++){
        key = a[i];
        j = i - 1;
        while(key< a[j] && j>=0){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            j--;
        }
    }
}

void topological(vector<int>& a){

}

void heap(vector<int> &a){};

int partition(vector<int> &a, int l,int r){
    int pivot = a[r];
    int j = l;
    for (int i = l; i < r; i++) {
        if (a[i] < pivot) {
            std::swap(a[i], a[j]);
            j++;
        }
    }
    std::swap(a[j], a[r]);
    return j;
}
void quick(vector<int> &a,int l,int r){
    if(l<r){
        int pi = partition(a, l, r);
        quick(a, l, pi - 1);
        quick(a, pi + 1, r);
    }
};

void selection(vector<int> &a){
    int j,min_idx;
    for (int i = 0;i<a.size()-1;i++){
        min_idx = i;
        for (int j = i + 1;j<a.size();j++){
            if(a[j]<a[min_idx]){
                std::swap(a[j],a[min_idx]);
            }
        }
    }
};

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

    cout << "Put choice 1 to 7 : ";
    int c;
    cin >> c;
    switch(c){
        case 1 :
        bubble(a);
        break;
        case 2 :
        merge(a,0,a.size()-1);
        break;
        case 3 :
        quick(a,0,a.size()-1);
        break;
        case 4:
        insertion(a);
        break;
        case 5:
        heap(a);
        break;
        case 6:
        topological(a);
        break;
        case 7:
        selection(a);
        break;
        default:
        cout << "Please select 1 to 7";
    }

    for(int i = 0; i <a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}