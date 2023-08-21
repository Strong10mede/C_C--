#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sol(){
    int n;
    cin>>n;
    int sum = 0;
    int answer = 0;
    vector<int> a(n), b(n),c(n),count(n,0);
    for(int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
    }

    for(int i = 0; i < n;i++){
            cin >> b[i];
        }

    if(sum!=0){
    
        for(int i = 0; i < n;i++){
            if(a[i]!=0 || b[i]!=0){
                c[i]=abs(a[i]-b[i]);
                count[i]++;
                }
        }
        
        a = b;
        b = c;
        for(int i = 0; i < n;i++){
            if(c[i]!=0){
                while(c[i]){
                    c[i]=abs(a[i]-b[i]);
                    a[i] = b[i];
                    b[i] = c[i];
                    count[i]++;
                }
            }
        }
        sort(count.begin(), count.end());
        int temp = 0;
        // for(int i = 0; i < n; i++){
        //     cout << count[i] << '\t';
        // }
        for(int i = 0; i < n; i++){ //n complexity
            if(count[i]==0){
                temp++;
            }
        }
            for (int i = temp+1; i < n; i++) //n complexity
            {
                count[i] = count[i] - count[temp];
                if (count[i] % 3 != 0)
                {
                    answer = 1;
                    break;
                }
            }
    }
   
    
    
    if(answer){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

    
    


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cout.tie(NULL);
    int test_case;
    cin>>test_case;
    for(int i = 0; i < test_case;i++){
        sol();
    }
    return 0;
}