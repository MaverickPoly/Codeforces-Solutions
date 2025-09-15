#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s.size() % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }

    int pos = s.size() / 2;
    string left = s.substr(0, pos);
    string right = s.substr(pos, pos);

    if (left == right) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
