#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        string result;
        for (int i = st.size() - 1; i >= 0; i--) {
            if (st[i] == 'p') result.push_back('q');
            else if (st[i] == 'q') result.push_back('p');
            else result.push_back(st[i]);
        }

        cout << result << endl;
    }

    return 0;
}
