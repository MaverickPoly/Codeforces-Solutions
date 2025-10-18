#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int i = 0;
    int cnt = 0;
    while(n > 0) {
        n--;
        i++;
        cnt++;
        if (m == i) {
            n++;
            i = 0;
        }
    }

    cout << "\t" << cnt << endl;

    return 0;
}
