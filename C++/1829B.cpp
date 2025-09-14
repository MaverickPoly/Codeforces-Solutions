#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int m = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
      int d;
      cin >> d;

      if (d) {
        current = 0;
      } else {
        current++;
      }
      m = max(m, current);
    }

    cout << m << endl;
  }

  return 0;
}
