#include<bits/stdc++.h>
using namespace std;
#define MIN 1e9
#define MAX -1e9
#define ll long long
#define pb push_back
int main(){
    int n; cin >> n;
    double count_pos=0;
    double count_neg=0;
    double count_0=0;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        if(a>0){
            count_pos++;
        }
        else if(a<0){
            count_neg++;
        }
        else count_0++;
    }
    cout << fixed << setprecision(6) << count_pos/n <<endl 
                                     << count_neg/n << endl
                                     << count_0/n;
}
