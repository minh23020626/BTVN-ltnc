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
    int rs(int x1,int v1,int x2,int v2){
        if(x1 > x2 && v1 > v2){
            return 0;
        }
        if(x2 > x1 && v2 >v1){
            return 0;
        }
        if(x1==x2 && v1==v2){
            return 1;
        }
        else if(v1!=v2 && (x2-x1)%(v1-v2)==0){
            return 1;
        }
        else return 0;
    }
    int main(){
        int x1,v1,x2,v2;
        cin >> x1 >> v1 >> x2 >> v2;
        if(rs(x1,v1,x2,v2)){
            cout << "YES";
        }
        else cout << "NO";
    }
