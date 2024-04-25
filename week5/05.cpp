    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n; cin >> n;
        set<int>se;
        for(int i=0;i<n;i++){
            int a,b; cin >> a >> b;
            if(a==1){
                se.insert(b);
            }
            else if(a==2){
                se.erase(b);
            }
            else if(a==3){
                if(se.find(b) == se.end()){
                    cout << "No"<<endl;
                }
                else{
                    cout << "Yes"<<endl;
                }
            }
        }
    }
