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
    int n; cin >> n;
    vector<int>num;
    for(int i=0;i<n;i++){
      int f; cin >> f;
      num.pb(f);
    }
    int s; cin >> s;
    int a,b; cin >> a >> b;
    int kt = b-a + 1;
    cout << n - kt << endl;
    vector<int>newnum;
    for(int i=0;i<n;i++){
      if(i+1==s) continue;
      else{
        newnum.pb(num[i]);
      }
    }
    for(int i=0;i<n-1;i++){
      if(i+1<a || i+1>= b) cout << newnum[i] << " ";
    }
}
