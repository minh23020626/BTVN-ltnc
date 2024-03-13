#include<bits/stdc++.h>
using namespace std;
#define MIN 1e9
#define MAX -1e9
#define ll long long
#define pb push_back
void convert(string a){
    stringstream ss(a);
    int hour,minute,second;
    char meridian;
    char colon;
    ss >> hour >> colon >> minute >> colon >> second >> meridian;
    if(meridian == 'A'){
        if(hour == 12){
            hour = 0;
        }
    }
    else{
        if(hour != 12){
            hour+=12;
        }
    }
    cout << setw(2) << setfill('0')<< hour << colon << setw(2) << setfill('0')<< minute << colon << setw(2) << setfill('0')<< second;
}
int main(){
    string time;
    cin >> time;
    convert(time);
}
