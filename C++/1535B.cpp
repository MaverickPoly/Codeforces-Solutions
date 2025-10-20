#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> evens;
        vector<int> odds;
        for (int i = 0; i < n; i++) {
            int d; cin >> d;
            if (d % 2 == 0) evens.push_back(d);
            else odds.push_back(d);
        }

        // O(t * (n + n * n))
        // n = 10^3
        // t = 10^3

        vector<int> v = evens;
        v.insert(v.end(), odds.begin(), odds.end());

        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (gcd(v[i], 2 * v[j]) > 1) cnt++;

        cout << cnt << endl;
    }
 
    return 0;
}
