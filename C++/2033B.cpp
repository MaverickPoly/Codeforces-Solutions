#include <bits/stdc++.h>


using namespace std;

/*
1  1  -1 -1 3
-3 1  4  4  -4
 2 -1 3  0  -5
4  5  3  -3 -1
3  1  0 -1 5

3 + 3 + 3 + 1+ 5 + 4
*/

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        int total = 0;

        int i = n - 1;
        while(i >= 0) {
            int r = i; int c = 0;
            int mn = INT_MAX;
            while (r < n and c < n) {
                mn = min(mn, matrix[r][c]);
                r++;
                c++;
            }
            
            if (mn < 0) {
                // cout << "MN: " << mn << endl;
                total += abs(mn);
            }
            i--;
        }

        i = 1;
        while(i < n) {
            int r = 0; int c = i;
            int mn = INT_MAX;
            while(r < n and c < n) {
                mn = min(mn, matrix[r][c]);
                r++;
                c++;
            }

            if (mn < 0) {
                // cout << "MN: " << mn << endl;
                total += abs(mn);
            }
            i++;
        }

        cout << "\t" << total << endl;
    }

    return 0;
}
