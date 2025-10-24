#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int a, b;
        int xk, yk;
        int xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<pair<int, int>> king = {
            {xk - a, yk - b}, {xk + a, yk - b}, {xk + b, yk - a},
            {xk + b, yk + a}, {xk + a, yk + b}, {xk - a, yk + b},
            {xk - b, yk + a}, {xk - b, yk - a},
        };
        vector<pair<int, int>> queen = {
            {xq - a, yq - b}, {xq + a, yq - b}, {xq + b, yq - a},
            {xq + b, yq + a}, {xq + a, yq + b}, {xq - a, yq + b},
            {xq - b, yq + a}, {xq - b, yq - a},
        };

        set<pair<int, int>> s;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (king[i].first == queen[j].first and king[i].second == queen[j].second) {
                    // cout << "- " << king[i].first << " " << king[i].second << " : " << queen[j].first << " " << queen[j].second << endl;
                    s.insert(king[i]);
                }
            }
        }

        cout << s.size() << endl << endl;
    }

    return 0;
}
