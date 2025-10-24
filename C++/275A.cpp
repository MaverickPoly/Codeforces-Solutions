#include <bits/stdc++.h>

using namespace std;

int main() {
    int ar[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int n; cin >> n;

            if (n % 2 == 0) continue;
            
            // if (i - 1 >= 0 and j - 1 >= 0) ar[i - 1][j - 1] = !ar[i - 1][j - 1];
            if (i - 1 >= 0) ar[i - 1][j] = !ar[i - 1][j];
            // if (i - 1 >= 0 and j + 1 < 3) ar[i - 1][j + 1] = !ar[i - 1][j + 1];

            if (j - 1 >= 0) ar[i][j - 1] = !ar[i][j - 1];
            ar[i][j] = !ar[i][j];
            if (j + 1 < 3) ar[i][j + 1] = !ar[i][j + 1];

            // if (i + 1 < 3 and j - 1 >= 0) ar[i + 1][j - 1] = !ar[i + 1][j - 1];
            if (i + 1 < 3) ar[i + 1][j] = !ar[i + 1][j];
            // if (i + 1 < 3 and j + 1 < 3) ar[i + 1][j + 1] = !ar[i + 1][j + 1];
        }
    }

    /*
    1 0 1
    8 8 8
    2 0 3

        
    */

    // cout << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ar[i][j] << "";
        }
        cout << endl;
    }

    return 0;
}
