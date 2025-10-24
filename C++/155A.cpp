#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;


	int n;
	cin >> n;
	int max = n, min = n;
	int score = 0;

	for (int i = 1; i < t; i++) {
		cin >> n;
		if (n > max) {
			max = n;
			score++;
		}
		if (n < min) {
			min = n;
			score++;
		}
	} 
	cout << score << endl;

	return 0;
}