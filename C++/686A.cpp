#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    long long n, x;
    cin >> n >> x;

    long long amount = x;
    int distressed = 0;

    for (int i = 0; i < n; i++) {
        char ch;
        long long num;
        cin >> ch >> num;

        if (ch == '+') {
            amount += num;
        } else {
            if (amount >= num) {
                amount -= num;
            } else {
                distressed++;
            }
        }
    }

    cout << amount << " " << distressed << endl;

    return 0;
}
