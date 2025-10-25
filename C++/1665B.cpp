/*

int d = the occurence of the most number in array, 2

we need to fill n - d places

for that we need to make ceil(n - d) / d  copies


3 * (n - d) / d + 

n - d + ceil((n - d) / d)

6
0 1 3 3 7 0
6 - 2 + ceil(4 / 2) = 4 + 2 = 6

2
-1000000000 1000000000
2 - 1 + ceil(1 / 1) = 1 + 1 = 2

4
4 3 2 1
4 - 1 + ceil(3 / 1) = 3 + 3 = 6
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        sort(ar.begin(), ar.end());
        int d = 0;
        int cnt = 1;
        int i = 1;
        while(i < n) {
            if (ar[i - 1] == ar[i]) {
                cnt++;
            } else {
                if (cnt > d) {
                    d = cnt;
                }

                cnt = 1;
            }
            i++;
        }
        d = max(d, cnt);
        
        int total = 0;
        int cur = d;
        int remaining = n - d;
        while (remaining > 0) {
            total += 1 + cur;
            remaining -= cur;
            cur *= 2;
        }

        total += remaining;

        cout << "\t" << total << endl;
    }


    return 0;
}
