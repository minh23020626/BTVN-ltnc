#include<bits/stdc++.h>
using namespace std;
#define MIN 1e9
#define MAX -1e9
#define ll long long
#define pb push_back
bool check(vector<int>num,int t,int sum){
    int sum1=0;
    for(int i=0;i<t;i++){
        sum=sum-(num[i]);
        if(i!=0){
        sum1+=num[i-1];
        }
        if(sum==sum1){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n; cin >> n;
    for(int i =0 ;i<n;i++){
        vector<int>num;
        int t; cin >> t;
        int sum=0;
        for(int j =0 ;j<t;j++){
           int a; cin >> a;
           sum+=a;
           num.pb(a);
        }
        if(check(num,t,sum)){
            cout << "YES"<<endl;
        }
        else cout << "NO"<<endl;
    }
}
