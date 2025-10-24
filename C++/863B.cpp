#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n * 2);
    for (int i = 0; i < n * 2; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int m = INT_MAX;
    for (int i = 0; i < n * 2; i++) {
        for (int j = i + 1; j < n * 2; j++) {
            vector<int> ar;
            for (int z = 0; z < n * 2; z++) {
                if (z == i or z == j) {
                    continue;
                }
                ar.push_back(v[z]);
            }

            // cout << "-- " << v[i] << " " << v[j] << endl;
            // for (int x = 0; x < ar.size(); x++) {
            //     cout << ar[x] << " ";
            // }
            // cout << endl;

            int cur = 0;
            for (int z = 0; z < n * 2 - 2; z+=2) {
                cur += abs(ar[z] - ar[z + 1]);
            }
            m = min(cur, m);
        }
    }
    
    cout << "\t" << m << endl;

    return 0;
}
