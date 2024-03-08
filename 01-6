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
    vector<int>af_arr;
    vector<int>bf_arr;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        af_arr.pb(a);
    }
    for(int i=n-1;i>=0;i--){
        bf_arr.pb(af_arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << bf_arr[i]<< " ";
    }
}
