#include <bits/stdc++.h>

using namespace std;

int main() {    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> positions;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num == 2) positions.push_back(i);
        }


        if (positions.size() == 0) cout << 1 << endl;
        else if (positions.size() % 2 != 0) cout << -1 << endl;
        else cout << positions[positions.size() / 2 - 1] + 1 << endl;
    }

    return 0;
}
