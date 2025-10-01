#include <bits/stdc++.h>

using namespace std;

/*
7,10,1,3,2

1, 3, 7
2, 10

1,2,3,7,10

*/

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n), evens, odds;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) evens.push_back(a[i]);
            else odds.push_back(a[i]);
        }

        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());

        vector<int> rebuilt(n);
        int ei = 0, oi = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) rebuilt[i] = evens[ei++];
            else rebuilt[i] = odds[oi++]; 
        }

        if (is_sorted(rebuilt.begin(), rebuilt.end())) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
