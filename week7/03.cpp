#include<bits/stdc++.h>
using namespace std;
int res(int x , int n, int num){
    if(x == 0){
        return 1;
    }
    if(pow(num,n)>x || x<0){
        return 0;
    }
    return res(x-pow(num,n),n,num+1) + res(x,n,num+1);
}
int main(){
    int x,n;
    cin >> x >> n;
    int kq = res(x,n,1);
    cout << kq;
}
