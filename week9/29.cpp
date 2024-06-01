#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bitwiseAnd(int N, int K) {
    int max_and = 0;
    for (int a = 1; a < N; ++a) {
        for (int b = a + 1; b <= N; ++b) {
            int and_val = a & b;
            if (and_val < K && and_val > max_and) {
                max_and = and_val;
            }
        }
    }
    return max_and;
}

int main() {
    int T;
    cin >> T;
    vector<int> results;
    
    for (int i = 0; i < T; ++i) {
        int N, K;
        cin >> N >> K;
        int result = bitwiseAnd(N, K);
        results.push_back(result);
    }
    
    for (int res : results) {
        cout << res << endl;
    }
    
    return 0;
}
