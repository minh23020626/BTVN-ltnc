#include<bits/stdc++.h>
    using namespace std;
    #define MIN 1e9
    #define MAX -1e9
    #define ll long long
    #define pb push_back
    int d1x[4] = {-1, -1, 0, 0};
    int d1y[4] = {0, 0, -1, 1};
    int d2x[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int d2y[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    void check(int mat[][100],int x,int w,int h){
        if(x>=h){
            return;
        }
        for(int j=0;j<w;j++){
            if(mat[x][j]==1){
        for(int i=2;i<=3;i++){
            if(mat[x+d1x[i]][j+d1y[i]]==3){
               mat[x+d1x[i]][j+d1y[i]]=4;
            }
        }}
        }
        for(int i=0;i<w;i++){
            if(mat[x][i]==4) mat[x][i]=1;
        }
        for(int i=0;i<w;i++){
            if(mat[x+1][i]==3 && mat[x][i]==1){
                mat[x+1][i]=1;
            }
        }
        check(mat,x+1,w,h);
    }
    int main(){
        int w,h; cin >> w >> h;
        int mat[100][100];
        int x,y;
        for(int i =0;i<h;i++){
            for(int j=0;j<w;j++){
                char a; cin >>a;
                if(a=='R'){
                    mat[i][j]=2;
                }
                else if( a=='E'){
                    mat[i][j]=3;
                }
                else if( a== 'Y'){
                    mat[i][j]=1;
                }
            }
        }
        check(mat,0,w,h);
        int count=0;
        for(int i=0;i<w;i++){
            if(mat[h-1][i]==1) count++;
        }
        if(count > 0) cout << "YES";
        else cout << "NO";
    }
