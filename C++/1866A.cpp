#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    int result = INT_MAX;
    while(n--) {
        cin >> num;
        result = min(result, abs(num));
    }

    cout << result << endl;

    return 0;
}
