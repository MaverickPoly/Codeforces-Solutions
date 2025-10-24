#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &t : a) cin >> t;

        int count = 0;
        auto min = min_element(a.begin(), a.end());
        int min_val = *min;
        for (auto it = a.begin(); it != a.end(); it++) {
            if (it != min) {
                count += *it - min_val;
            }
        }
        cout << count << endl;
    }

    return 0;
}
