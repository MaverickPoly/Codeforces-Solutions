#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> vi(4);

	for (int i = 0; i < vi.size(); i++) {
		cin >> vi[i];
	}
	sort(vi.begin(), vi.end());
	int last = vi[3];

	int a = vi[3] - vi[0];
	int b = vi[3] - vi[1];
	int c = vi[3] - vi[2];

	cout << a << " " << b << " " << c << endl;

	return 0;
}
