#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
      int current;
      cin >> current;
      sum += current;
    }

    if (sum % 2 == 0)
      cout << "YES";
    else
      cout << "NO";
    cout << endl;
  }

  return 0;
}
