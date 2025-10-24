#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int t; cin >> t;

  string target = "codeforces";

  while(t--) {
    char c; cin >> c;

    int pos = target.find(c);
    if (pos == -1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
