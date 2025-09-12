#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;

	for (int i = 0; i < t; i++) {
		string n; cin >> n;

		multiset<int> ms;
		for (int j = 0; j < n.size(); j++) {
			int current = n[j] - '0';
			for (int z = 0; z < n.size() - j - 1; z++) {
				current *= 10;
			}
			if (current != 0) {
				ms.insert(current);
			}
		}

		cout << ms.size() << endl;
		for (int el : ms) {
			cout << el << " ";
		}
		cout << endl;
	}

	return 0;
}
