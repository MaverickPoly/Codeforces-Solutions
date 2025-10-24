#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    
    int res = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        while(i < n and st[i] == 'x') {
            cnt++;
            i++;
        }
        if (cnt >= 3) {
            res += cnt - 2;
        }
    }

    cout << res << endl;


    return 0;
}
