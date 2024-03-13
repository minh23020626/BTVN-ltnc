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
       int n; int p;
       cin >> n >> p;
       double tb= (double)n/2;
       int j=1;
       if(n==p || p==1){
        cout << 0 ;
        return 0;
       }
       if(p==tb){
           cout << (n-p)/2;
           return 0;
       }
       if(p<tb){
        if(p%2!=0){
            cout << (p-1)/2;
        }
        else{
            cout << (p-1)/2 +1;
        }
       }
       else{
        if((n%2==0 && p%2==0) || (n%2!=0 && p%2!=0)){
            cout << (n-p)/2;
        }
        else{
        if(n%2==0 && p%2!=0){
            cout << (n-p+1)/2;
        }
        else{
            cout << (n-1-p)/2;
        }
        } 
       }
    }
