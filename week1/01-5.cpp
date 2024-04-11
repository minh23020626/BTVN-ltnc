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
    vector<int>check;
    for(int i=0;i<4;i++){
        int a; cin >> a;
        check.pb(a);
    }
    sort(check.begin(),check.end(),greater<int>());
    cout << check[0];
}
