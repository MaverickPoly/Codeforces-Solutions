#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int cnt = 0;
	int target = 5 - k;
	while (n--) {
		int y; cin >> y;
		if (y <= target) cnt++;
	}

	cout << cnt / 3 << endl;
	return 0;
}
