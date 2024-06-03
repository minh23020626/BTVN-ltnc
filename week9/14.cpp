#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; cin >> a;
    try{
        int rs = stoi(a);
        cout << rs;
    } catch(invalid_argument&){
        cout <<"Bad String";
    }
}
