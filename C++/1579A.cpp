#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        int a = 0;
        int b = 0;
        int c = 0;

        for (char ch : st) {
            if (ch == 'A') a++;
            else if (ch == 'B') b++;
            else c++;
        }

        if (a + c == b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
