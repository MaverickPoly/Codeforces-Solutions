#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool contains(vector<int> v, int el) {
    for (int i : v) {
        if (i == el) {
            return true;
        }
    }

    return false;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        vector<int> v = {a, b, c, d};
        sort(v.begin(), v.end());

        vector<int> v1 = {a, b};

        if ((contains(v1, v[0]) and contains(v1, v[1])) or (contains(v1, v[2]) and contains(v1, v[3]))) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
