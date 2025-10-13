#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if (n % 7 == 0) {
            cout << n << endl;
            continue;
        }

        string cur_s = to_string(n);
        int size = cur_s.size();
        cur_s[0] = '1';
        int cur = stoi(cur_s);
        int i = 1;
        while(cur % 7 != 0) {
            cur += i * pow(10, size - 1);
        }
        cout << cur << endl;
    }

    return 0;
}
