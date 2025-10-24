#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int score = 0;
        for (int i = 0; i < 10; i++) {
            string st;
            cin >> st;

            for (int j = 0; j < 10; j++) {
                if (st[j] == 'X') {
                    int ring = min({i + 1, j + 1, 10 - i, 10 - j});
                    score += ring;
                }
            }
        } 
        cout << score << endl;
    }

    return 0;
}
