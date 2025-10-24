#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool isColor = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;

            if (ch != 'B' and ch != 'W' and ch != 'G') isColor = true;
        }
    }

    if (isColor) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;

    return 0;
}
