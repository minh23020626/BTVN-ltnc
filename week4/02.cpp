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
        int n; cin >>n;
        map<int,int>num;
        vector<int>rs;
        for(int i=0;i<n;i++){
            int a; cin >> a;
            num[a]++;
        }
        for(auto i : num){
            rs.pb(i.second);
        }
        sort(rs.begin(),rs.end(),greater<int>());
        cout << n - rs[0];
    }
