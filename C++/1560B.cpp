#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long a, b, c;
    cin >> a >> b >> c;

    long long diff = llabs(a - b);

    if (diff == 0) {
      cout << -1 << endl;
      continue;
    }

    long long n = 2 * diff;
    long long mx = max(a, max(b, c));
    if (n < mx) {
      cout << -1 << endl;
      continue;
    }

    long long d;
    if (c + diff <= n)
      d = c + diff;
    else
      d = c - diff;

    cout << d << endl;
  }

  return 0;
}
