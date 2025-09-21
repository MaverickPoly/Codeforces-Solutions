#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string x;
        cin >> x;

        int m = INT_MAX;
        for (int i = 0; i < x.size(); i++) {
            m = min(m, x[i] - '0');
        }

        cout << m << endl;
    }

    return 0;
}
