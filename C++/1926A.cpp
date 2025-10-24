#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        string st;
        cin >> st;

        int count_a = count(st.begin(), st.end(), 'A');
        int count_b = count(st.begin(), st.end(), 'B');

        if (count_a > count_b) {
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }

    return 0;
}