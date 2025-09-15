#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int y, m;
    cin >> y >> m;

    cout << (24 - y - 1) * 60 + 60 - m << endl;
  }

  return 0;
}
