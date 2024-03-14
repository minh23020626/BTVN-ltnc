#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2; cin >>s1>>s2;
    int num1[s1],num2[s2];
    for(int i=0;i<s1;i++) cin >> num1[i];
    for(int i =0;i<s2;i++) cin >> num2[i];
    vector<int>kc;
    for(int i=num1[s1-1];i<=num2[0];i++){
        int c=0;
        for(int j=0;j<s1;j++){
            if(i%num1[j]!=0){
                c=1;
                break;
            }
        }
        if(c==0) kc.push_back(i);
    }
    int count=0;
        for(int i=0;i<kc.size();i++){
        int c=0;
        for(int j=0;j<s2;j++){
            if(num2[j]%kc[i]!=0){
                c=1;
            }
        }
        if(c==0) count++;
    }
    cout << count;
}
