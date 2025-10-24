#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    bool exists = false;
    for (int i = 0; i < n; i++) {
      int d;
      cin >> d;
      if (d == k) {
        exists = true;
      }
    }

    if (exists)
      cout << "YES";
    else
      cout << "NO";
    cout << "\n";
  }

  return 0;
}
