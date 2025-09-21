#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int steps = 0;
        while(a != b) {
            if (a < b) {
                int temp = b - a;
                if (temp % 2 == 0) temp--;
                a += temp;
            } else {
                int temp = a - b;
                if (temp % 2 != 0) temp++;
                a -= temp;
            }
            steps++;
        }

        cout << steps << endl;
    }

    return 0;
}