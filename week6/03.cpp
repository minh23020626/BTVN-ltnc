#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    vector<int>scores;
    public:
    void input(){
        for(int i=0;i<5;i++){
            int score; cin >> score;
            scores.push_back(score);   
        }   
    }
    int sum(){
        int sum = 0;
        for(int i = 0; i < 5; i++){
            sum = sum + scores[i];
        }
        return sum;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    Student* s = new Student[n];
    for(int i=0;i<n;i++){
        s[i].input();
    }
    int kittenscore = s[0].sum();
    int count=0;
    for(int i = 1 ; i < n;i++){
        if(s[i].sum()>kittenscore){
            count++;
        }
    }
    cout << count;
}
