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
   int c,d; cin >> c >> d;
   int *a = &c;
   int *b = &d;
   cout << *a + *b << endl;
   cout << abs(*a - *b);
}
