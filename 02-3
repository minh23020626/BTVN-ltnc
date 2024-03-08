    #include<bits/stdc++.h>
    using namespace std;
    #define MIN 1e9
    #define MAX -1e9
    #define ll long long
    #define pb push_back
    int d1x[4] = {-1, 0, 0, 1};
    int d1y[4] = {0, -1, 1, 0};
    int d2x[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int d2y[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int main(){
        int n,k; cin >> n >> k;
        int mat[n];
        for(int i=0;i<n;i++){
            cin >> mat[i];
        }
        int count=0;
        for(int i=0 ;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = mat[i]+mat[j];
                if(sum%k==0){
                  count++;
                }
            }
        }
        cout << count;
            }
