#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while(t--) {
    int a, b; cin >> a >> b;
    int ab = abs(a - b);
    int z = ab / 10;
    if (ab % 10 != 0) z++;
    cout << z << endl;
  }

  return 0;
}
