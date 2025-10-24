#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int sum = 0;
        int one_c = 0;
        int two_c = 0;

        for (int i = 0; i < n; i++) {
            int current;
            cin >> current;

            sum += current;
            if (current == 1) one_c++;
            else two_c++;
        }

        if (sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            if (one_c >= 1) {
                cout << "YES" << endl;
            } else if (two_c % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}