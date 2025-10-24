#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;

    string original = "";
    int i = 0;
    int incr = 1;
    while (i < n) {
        original += s[i];
        i += incr;
        incr++;
    }

    cout << original << endl;

    return 0;
}
