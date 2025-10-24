#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;
    int m = INT_MAX;
    for (int c = a; c <= b; c++) {
      int current = (c - a) + (b - c);
      if (current < m)
        m = current;
    }

    cout << m << endl;
  }

  return 0;
}
