#include <bits/stdc++.h>

using namespace std;

int main() {
	int i = 3;
	vector<int> vi(i);
	while (i--) {
		cin >> vi[i];
	}

	sort(vi.begin(), vi.end());

	int mid = vi[1];
	int s = abs(mid - vi[0]) + abs(mid - vi[2]);
	cout << s << endl;
	
	return 0;
}