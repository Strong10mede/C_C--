#include<bits/stdc++.h>
#define ll long long int
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a,b, n) for (ll a = b; a < n;a++)
#define vi vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll,ll>
using namespace std;
void sol(){
    ll n;
    cin >> n;
    ll count = 0;
    vi val(n+2,0),color(n+2,0);
    FOR(i,1,n+1){
        cin >> val[i];
    }
    val[0] = 1,color[0]=1, val[n + 1] = 1, color[n + 1] = 1;
    FOR(i,1,n+1){
        if(val[i]>0 && val[i-1]>0 && val[i+1]>0){
            if(val[i]==1){
                if(i-1!=0){
                color[i] = 1;
                color[i - 1] = 1;
                val[i] = -1;
            }
            else if(i+1!=n+1){
                color[i] = 1;
                color[i + 1] = 1;
                val[i] = -1;
            }
            }
            else{
            if(i-1!=0){
                color[i] = 1;
                color[i - 1] = 1;
                val[i] = -1;
            }
            if(i+1!=n+1){
                color[i] = 1;
                color[i + 1] = 1;
                val[i] = -1;
            }
            }
            count++;
        }
    }
    FOR(i,1,n+1){
        if(val[i]==2 && color[i]==0){
            if(color[i-1]==0){
                color[i - 1] = 1;

            }
            if(color[i+1]==1){
                color[i +1] = 1;
            }
            count++;
            color[i] = 1;
            val[i] = -1;
        }
        else if(color[i]==1 && val[i]==2){
            if(color[i-1]==0){
                color[i - 1] = 1;
            }
            else if(color[i+1]==0){
                color[i+1] = 1;
            };

        }      
    }
    FOR(i,1,n+1){
        if(val[i]==1 && color[i]==0){
            if(color[i-1]==0){
                color[i - 1] = 1;

            }
            else if(color[i+1]==1){
                color[i +1] = 1;
            }
            count++;
            color[i] = 1;
            val[i] = -1;
        }
        else if(color[i]==1 && val[i]==1){
            if(color[i-1]==0){
                color[i - 1] = 1;
            }
            else if(color[i+1]==0){
                color[i+1] = 1;
            };
            val[i] = -1;
        }      
    }
    FOR(i,1,n+1){
        if(!color[i]){
            count++;
        }
    }


    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
        sol();
    

    return 0;

}
