#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int cnt = 0;
  for (int a = 0; a <= 40; a++) {
    int b = n - a * a;
    if (b >= 0 and a + b * b == m) {
      // cout << a << " " << b << endl;
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
