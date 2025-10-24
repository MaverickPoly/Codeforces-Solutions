#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int bestSum = -1;
        int bestX = 0;
        for (int x = 2; x <= n; x++) {
            int m = n / x;
            int sum = x * m * (m + 1) / 2;
            if (sum > bestSum) {
                bestSum = sum;
                bestX = x;
            }
        }

        cout << bestX << endl;
    }

    return 0;
}