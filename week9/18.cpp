#include <iostream>

using namespace std;

int main() {
    int d1, m1, y1; // Actual return date
    int d2, m2, y2; // Expected return date

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    int fine = 0;

    if (y1 > y2) {
        fine = 10000;
    } else if (y1 == y2) {
        if (m1 > m2) {
            fine = 500 * (m1 - m2);
        } else if (m1 == m2 && d1 > d2) {
            fine = 15 * (d1 - d2);
        }
    }

    cout << fine << endl;

    return 0;
}
