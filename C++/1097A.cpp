#include <bits/stdc++.h>
using namespace std;

int main() {
    string table;
    cin >> table;

    bool canPlay = false;
    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;

        if (table[0] == card[0] || table[1] == card[1]) {
            canPlay = true;
        }
    }

    if (canPlay) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
