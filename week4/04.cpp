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
        int n, q; cin >> n >> q;
        vector<vector<int>>arr(n);
        for(int i = 0 ; i < n;i++){
            int k; cin >> k;
            arr[i].resize(k);
            for(int j=0;j<k;j++){
               cin>> arr[i][j];
            }
        }
        for(int i=0;i<q;i++){
            int x,y; cin >> x >> y;
            cout << arr[x][y]<< endl;
        }

    }
