#include <bits/stdc++.h>

using namespace std;



int main() {
    int a, b;
    cin >> a >> b;

    int m = min(a, b);

    long long res = 1;
    for (int i = 2; i <= m; i++) {
        res *= i;
    }

    cout << res << endl;


    return 0;
}
