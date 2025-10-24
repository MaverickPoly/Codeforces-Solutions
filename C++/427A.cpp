#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;

	int of = 0;
	int total = 0;

	for (int i = 0; i < t; i++) {
		int n; cin >> n;

		if (n == -1) {
			if (of > 0) of = max(0, of - 1);
			else total++;
		}
		else {
			of += n;
		}
	}
	cout << total << endl;

	return 0;
}