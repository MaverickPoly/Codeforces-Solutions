#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int left = 240 - k;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		left -= (i + 1) * 5;
		if (left < 0) {
			break;
		}
		cnt++;
	}
	cout << cnt << endl;

	return 0;
}
