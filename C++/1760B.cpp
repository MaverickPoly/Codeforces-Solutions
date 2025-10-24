#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string st;
        cin >> n >> st;

        char m = st[0];
        for (char ch : st) {
            if (ch > m) m = ch;
        }
        cout << m - 'a' + 1 << endl;
    }

    return 0;
}