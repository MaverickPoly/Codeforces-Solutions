#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    int cnt1 = 0, cnt0 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') cnt1++;
        if (s[i] == '0') cnt0++;
        if (s[i] == '2') cnt2++;
    }

    if (cnt0 == 0) {
        cout << string(cnt1, '1') << string(cnt2, '2') << endl;
        return 0;
    }

    int first = s.find('2');

    if (first == string::npos) {
        cout << string(cnt0, '0') << string(cnt1, '1');
        return 0;
    }

    for (int i = 0; i < first; i++) {
        if(s[i] == '0') cout << '0';
    }

    cout << string(cnt1, '1');

    for (int i = first; i < s.size(); i++) {
        if (s[i] != '1') cout << s[i];
    }
    cout << endl;


    return 0;
}
