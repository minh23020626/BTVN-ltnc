#include <iostream>
#include <vector>
using namespace std;

void bubbleSortAndReport(vector<int>& arr) {
    int n = arr.size();
    int numSwaps = 0;

    for (int i = 0; i < n; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                swap(arr[j], arr[j + 1]);
                numSwaps++;
                swapped = true;
            }
        }

        // If no elements were swapped in the inner loop, then break
        if (!swapped) {
            break;
        }
    }

    // Print the results
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n - 1] << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    bubbleSortAndReport(arr);
    
    return 0;
}
