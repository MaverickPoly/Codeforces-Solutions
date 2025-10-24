#include <bits/stdc++.h>

using namespace std;

bool isPermutation(vector<int> v) {
    for (int i = 1; i <= v.size(); i++) {
        if (v[i - 1] != i) return false;
    }

    return true;
}


int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        bool finished = false;
        for (int &t : a) cin >> t;

        for (int c = 0; c < n; c++) {
            for (int i = 1; i < n - 1; i++) {
                if (a[i - 1] < a[i] and a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                }
            }

            if (isPermutation(a)) {
                cout << "YES" << endl;
                finished = true;
                break;
            }
        }

        if (!finished) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
