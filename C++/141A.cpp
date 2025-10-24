#include <bits/stdc++.h>

using namespace std;

int main() {
	string name, initial, end; cin >> name >> initial >> end;

	for (char c : name) {
		int index = end.find(c);
		if (index == string::npos) {
			cout << "NO" << endl;
			return 0;
		}
		end.erase(index, 1);
	}

	for (char c : initial) {
		int index = end.find(c);
		if (index == string::npos) {
			cout << "NO" << endl;
			return 0;
		}
		end.erase(index, 1);
	}

	if (end.size() == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}