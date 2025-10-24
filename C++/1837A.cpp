#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, k;
        cin >> x >> k;

        vector<int> vals;
        int pos = 0;
        while(pos != x) {
            int temp = x - pos;
            if (temp % k == 0) temp--;
            pos += temp;
            vals.push_back(temp);
        }

        cout << vals.size() << endl;
        for (int val : vals) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
