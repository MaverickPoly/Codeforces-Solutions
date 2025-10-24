#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        short turn = c % 2; // 0 - Anna, 1 - Katie
        int m = min(a, b);

        if (turn) {
            if (b > a) {
                cout << "Second";
            } else {
                cout << "First";
            }
        } else {
            if (a > b) {
                cout << "First";
            } else {
                cout << "Second";
            }
        }

        cout << endl;
    }

    return 0;
}
