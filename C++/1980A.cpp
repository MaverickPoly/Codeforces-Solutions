#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        string st;
        cin >> st;
        string target = "ABCDEFG";

        map<char, int> mm;
        for (char c : st) {
            mm[c]++;
        }

        int total = 0;
        for (char c : target) {
            total += max(0, m - mm[c]);
        }

        cout << total << endl;        
    }

    return 0;
}