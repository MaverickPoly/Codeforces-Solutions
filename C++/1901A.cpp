#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> stations(n);
        for (int &t : stations) cin >> t;

        vector<int> road(x * 2);

        int total = 0;
        int current = 0;
        for (int i = 0; i < x; i++) {
            if (find(stations.begin(), stations.end(), i) != stations.end()) {
                total = max(total, current);
                current = 1;
            } else {
                current++;
            }
        }
        for (int i = x; i >= 0; i--) {
            if (find(stations.begin(), stations.end(), i) != stations.end()) {
                total = max(total, current);
                current = 0;
            } else {
                current++;
            }
        }
        total = max(total, current);
        cout << total << endl;
    }    

    return 0;
}
