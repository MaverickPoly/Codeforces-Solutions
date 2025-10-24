#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ak = true; // is it Akshat's turn
    while (n * m >= 1) {
        n--; m--;
        ak = !ak;
    }

    if (ak) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }

    return 0;
}
