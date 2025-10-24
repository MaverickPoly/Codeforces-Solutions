#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string alp, text;
        cin >> alp >> text;

        int total = 0;
        int current = alp.find(text[0]) + 1;
        for (int i = 1; i < text.size(); i++) {
            int pos = alp.find(text[i]) + 1;
            total += abs(current - pos);
            current = pos;
        }

        cout <<  total << endl;
    }

    return 0;
}
