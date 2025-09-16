#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_el(vector<int> ar) {
    int m = ar[0];
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] > m) m = ar[i];
    }
    return m;
}

int min_el(vector<int> ar) {
    int m = ar[0];
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] < m) m = ar[i];
    }
    return m;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max = max_el(a);
        int min = min_el(a);

        cout << max - min << "\n";
    }
    return 0;
}