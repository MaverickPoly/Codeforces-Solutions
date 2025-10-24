#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<bool> dragons(d + 1, false);

    for (int i = k; i <= d; i += k) {
        dragons[i] = true;
    }
    for (int i = l; i <= d; i += l) {
        dragons[i] = true;
    }
    for (int i = m; i <= d; i += m) {
        dragons[i] = true;
    }
    for (int i = n; i <= d; i += n) {
        dragons[i] = true;
    }
    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (dragons[i]) count++;
    }
    cout << count << endl;
    

    return 0;
}
