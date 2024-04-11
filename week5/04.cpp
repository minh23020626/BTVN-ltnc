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
    void sx(pair<int,int>num[],int x,int low,int high){
        int pivot=(low+high)/2;
        if(num[pivot].first==x){
            while (pivot--)
            {
                if(num[pivot].first != x){
                    cout << "Yes" <<" "<<num[pivot+1].second;
                    return;
                }
            }
        }
        if((num[pivot].first>x && num[pivot-1].first<x)){
            cout << "No" << " " << num[pivot].second;
        }
        else if( (num[pivot].first<x && num[pivot+1].first>x)){
            cout << "No" << " "<< num[pivot+1].second;
        }
        else if(num[pivot].first>x){
            sx(num,x,low,pivot-1);
        }
        else sx(num,x,pivot+1,high);
    }
    int main(){
        int n; cin >> n;
        pair<int,int>num[n+1];
        for(int i =1;i<=n;i++){
            cin >> num[i].first;
            num[i].second = i;
        }
        int t; cin >> t;
        while(t--){
            int x; cin >> x;
            sx(num,x,1,n); cout <<endl;
        }
    }
