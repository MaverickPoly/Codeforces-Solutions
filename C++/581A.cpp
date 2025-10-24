#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b; cin >> a >> b;

	int mi = min(a, b);
	int ma = max(a, b);

	int cnt = mi;

	ma -= mi;
	mi = 0;

	int cnt1 = (int) ma / 2;

	cout << cnt << " " << cnt1 << endl;
	
	return 0;
}
