#include <bits/stdc++.h>
using namespace std;


int v_sum(vector<int> v) {
    int s = 0;
    for (int el : v) s += el;
    return s;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(2 * n);
        for (int &t : v) cin >> t;

        int evens = 0, odds = 0;
        for (int val : v) {
            if (val % 2 == 0) evens++;
            else odds++;
        }

        if (evens == n and odds == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
