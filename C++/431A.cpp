#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    string st;
    cin >> st;

    int total = 0;
    for (char ch : st) {
        total += a[ch - '0' - 1];
    }

    cout << total << endl;

    return 0;
}

