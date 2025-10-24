#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    if (n == 0) {
        cout << "0 0 0" << endl;
        return 0;
    }


    int a = 0; int b = 1;
    while(true) {
        if (a + b == n) break;

        int temp = a;
        a = b;
        b = temp + b;
    }

    cout << b << " " << a << " " << 0 << endl;

    return 0;
}

