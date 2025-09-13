#include <bits/stdc++.h>

using namespace std;

void lower(string &st) {
	for (int i = 0; i < st.size(); i++) {
		st[i] = tolower(st[i]);
	}
}

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		string st; cin >> st;

		lower(st);
		if (st == "yes" || st == "no") {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
