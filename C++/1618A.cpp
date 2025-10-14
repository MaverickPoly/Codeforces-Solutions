#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        vector<int> ar(7);
        for (int i = 0; i < 7; i++) cin >> ar[i];

        int a = ar[0], b = ar[1];
        int c = ar[6] - a - b;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}
