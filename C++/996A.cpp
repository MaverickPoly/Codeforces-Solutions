#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    int count = 0;
    vector<int> coins = {1, 5, 10, 20, 100};

    for (int i = coins.size() - 1; i >= 0; i--) {
        int coin = coins[i];
        int cur = n / coin;
        count += cur;
        n -= cur * coin;
    }

    cout << count << endl;

    

    return 0;
}