#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, r;
	cin >> k >> r;

	int cnt = 1;
	while (true) {
		int current = (k * cnt) % 10;
		if (current == r || current == 0) {
			cout << cnt << endl;
			break;
		}
		cnt++;
	}

	return 0;
}
