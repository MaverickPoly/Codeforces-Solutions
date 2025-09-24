#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k, p;
    cin >> n >> k >> p;

    int num = k / p;

    if (k % p > 0) {
      num++;
    } else if (k % p < 0) {
      num--;
    }
    num = abs(num);

    if (num > n) {
      cout << -1 << endl;
    } else {
      cout << num << endl;
    }
  }

  return 0;
}
