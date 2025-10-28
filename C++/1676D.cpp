#include <bits/stdc++.h>

using namespace std;

int calculate_sum(vector<vector<int>> &matrix, int row, int col, int n, int m) {
    int sum = 0;
    
    // Top Left
    int r = row - 1, c = col - 1;
    while(r >= 0 and c >= 0) {
        sum += matrix[r][c];
        r--; c--;
    }
    
    // Top right
    r = row - 1, c = col + 1;
    while(r >= 0 and c < m) {
        sum += matrix[r][c];
        r--; c++;
    }
    
    // Bottom left
    r = row + 1, c = col - 1;
    while(r < n and c >= 0) {
        sum += matrix[r][c];
        r++; c--;
    }
    
    // Bottom right
    r = row + 1, c = col + 1;
    while(r < n and c < m) {
        sum += matrix[r][c];
        r++; c++;
    }
    
    // Add current position
    sum += matrix[row][col];
    
    return sum;
}
    
int main() {
    int t; cin >> t;
    
    while(t--) {
        int n, m; cin >> n >> m;
    
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
    
        int max_sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Calculate max sum for position [i, j]
                int cur_sum = calculate_sum(matrix, i, j, n, m);
                max_sum = max(max_sum, cur_sum);
            }
        }
    
        cout << max_sum << endl;
    }
    
    return 0;
}
