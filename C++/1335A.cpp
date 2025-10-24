#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<ll> input(t);
    for (int i = 0; i < t; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < t; i++) {
        int res = (input[i] - 1) / 2;
        cout << res << endl;
    }

    return 0;
}