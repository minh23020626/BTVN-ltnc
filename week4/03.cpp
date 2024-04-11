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
bool check(string s){
    int size=s.size();
    for(int i=0;i<size/2;i++){
      if(s[i]!=s[size-1-i]){
        return false;
      }
    }
    return true;
}
int kt_s(string s){
    if(check(s)) return -1;
    int size = s.size();
    for(int i=0;i<size/2;i++){
      if(s[i]!=s[size-1-i]){
      string s_test1 = s.substr(0,i) + s.substr(i+1);
      if(check(s_test1)) return i;
      else{
         string s_test2 = s.substr(0,size-1-i) + s.substr(size-i);
         if(check(s_test2)) return size-1-i;
         else return -1;
      }
    }
    }
    return -1;
}
int main(){
  int q; cin >> q;
  while(q--){
    string s;
    cin >> s;
    cout << kt_s(s) << endl;
  }
}
