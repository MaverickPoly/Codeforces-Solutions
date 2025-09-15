#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    string st;
    cin >> n;
    cin >> st;

    set<char> s;
    for (int i = 0; i < n; i++) {
      s.insert(st[i]);
    }

    cout << n + s.size() << endl;
  }

  return 0;
}
