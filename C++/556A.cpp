#include <bits/stdc++.h>


using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') count1++;
        else count0++;
    }

    int moves = min(count0, count1);
    cout << n - moves * 2 << endl;

    return 0;
}
