#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        st.erase(st.size() - 2, 2);
        st.push_back('i');

        cout << st << endl;
    }

    return 0;
}
