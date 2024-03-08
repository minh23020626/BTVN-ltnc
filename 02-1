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
    int check(int a){
        string b = to_string(a);
        int count =0;
        int lenght = b.size();
        for(int i=0;i<lenght;i++){
            if(b[i]=='0') continue;
            if(a%(b[i]-'0')==0){
                count ++;
            }
        }
        return count;
    }
    int main(){
        int t,n; cin >> t;
        for(int i = 0 ;i<t ;i++){
            int a; cin >>a;
            cout << check(a)<<endl;
        }
    }
