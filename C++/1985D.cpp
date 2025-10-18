#include <bits/stdc++.h>


using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> inp(n);
        for (int i = 0; i < n; i++) {
            cin >> inp[i];
        }

        int row, col;

        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < m; j++) {
                if (inp[i][j] == '#') {
                    row = i;
                    col = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
            
        }

        int end_row = row;
        while(end_row < n and inp[end_row][col] == '#') {
            // cout << "  - " << end_row << " " << row << " " << col << endl;
            end_row++;
        }

        // cout << "\tANS:" << endl << "\t";
        if (end_row == row + 1) {
            // cout << "YY: ";
            cout << end_row << " " << col + 1 << endl;
        } else {
            cout << (end_row + row + 2) / 2 << " " << col + 1 << endl;
        }
    }

    return 0;
}
