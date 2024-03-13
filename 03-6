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
       vector<char>low;
       vector<char>up;
       for(int i = 'a';i<= 'z';i++) low.pb(i);
       for(int i = 'a';i<= 'z';i++) low.pb(i);
       for(int i = 'A'; i<= 'Z';i++) up.pb(i);
       for(int i = 'A'; i<= 'Z';i++) up.pb(i);
       int lenght; cin >> lenght;
       string a;
       cin >> a;
       int k ; cin >> k;
       string rs = "";
       for(int i=0;i<lenght;i++){
        if(islower(a[i])){
            for(int j = 0;j<26;j++){
               if(a[i]==low[j]){
                rs.pb(low[j+(k%26)]);
               }
            }
        }
        else if(isupper(a[i])){
            for(int j = 0;j<26;j++){
                if(a[i]==up[j]){
                    rs.pb(up[j+(k%26)]);
                }
            }
        }
        else rs.pb(a[i]);
        }
        cout << rs;
       }
