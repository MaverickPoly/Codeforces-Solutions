#include <bits/stdc++.h>

using namespace std;

/*
Subarray: Contigious elements in the array
Subsequence: Not necessarily contigious - can skip elements
*/

// Subarray
int generateSubarrays(int n, vector<int> &v) {
    // Calculate total sum
    int total_sum = 0;
    for (int i = 0; i < n; i++) total_sum += v[i];

    // Generate subsequences
    vector<vector<int>> subs;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> cur(v.begin() + i, v.begin() + j);
            subs.push_back(cur);
        }
    }

    // Count subsequences with sum = s - 1
    int cnt = 0;
    for (auto sub : subs) {
        int s = 0;
        for (int el : sub) {
            s += el;
        }
        if (s + 1 == total_sum) cnt++;
    }

    return cnt;
}

// Subsequence - Backtracking
void generateSubsequences(int index, vector<int> &array, vector<int> &current, vector<vector<int>> &res) {
    if (index == array.size()) {
        res.push_back(current);
        return;
    }

    // Include current element
    current.push_back(array[index]);
    generateSubsequences(index + 1, array, current, res);
    current.pop_back();

    // Exclude current element
    generateSubsequences(index + 1, array, current, res);
}

int main_prev() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> array(n);
        int total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            total_sum += array[i];
        }

        vector<int> current;
        vector<vector<int>> res;
        generateSubsequences(0, array, current, res);

        int cnt = 0;
        for (int i = 0; i < res.size(); i++) {
            int s = 0;
            for (int j = 0; j < res[i].size(); j++) {
                s += res[i][j];
            }
            if (s + 1 == total_sum) cnt++;
        }

        cout << "\t" << cnt << endl;
    }

    return 0;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        long long cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1) cnt1++;
            if (v[i] == 0) cnt0++;
        }

        long long res = cnt1;
        for (int i = 0; i < cnt0; i++) {
            res *= 2;
        }
        cout << "\t" << res << endl;
    }

    return 0;
}
