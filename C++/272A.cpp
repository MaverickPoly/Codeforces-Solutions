#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    // Get friends
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Calculate sum
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];

    // Create array of friends
    vector<int> ar(n + 1);
    for (int i = 0; i < n + 1; i++) {
        ar[i] = i;
    }

    int index = 0;
    for (int i = 1; i < s; i++) {
        // cout << "Index: " << index << endl;;
        index = (index + 1) % (n + 1);
    }

    // cout << "Index: " << index << endl;
    int cnt = 0;
    for (int i = 1; i <= 5; i++) {
        if ((index + i) % (n + 1) != 0) {
            // cout << i << " " << (index + i) % (n + 1) << endl;
            cnt++;
        }
    }
    cout << "\t" << cnt << endl;

    /*
    2
    3 5

    D 1 2

    8
    */

    return 0;
}
