#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        bool sakTurn = true;
        int x = 0;
        int i = 1;

        while(abs(x) <= n) {
            if (sakTurn) {
                x -= 2 * i - 1;
            } else {
                x += 2 * i - 1;
            }
            i++;
            sakTurn = !sakTurn;
        }

        if (sakTurn) {
            cout << "Kosuke" << endl;
        } else {
            cout << "Sakurako" << endl;
        }
    }

    return 0;
}
