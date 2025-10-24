#include <bits/stdc++.h>
using namespace std;

vector<string> split(string st, char delimiter) {
    stringstream ss(st);

    vector<string> parts;
    string token;
    while(getline(ss, token, delimiter)) {
        parts.push_back(token);
    }

    return parts;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string st;
        getline(cin, st);

        vector<string> parts = split(st, ' ');
        for (string part : parts) {
            cout << part[0];
        }
        cout << endl;
    }

    return 0;
}
