#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int a; cin >> a;

    int cnt = 0;
    for (int i = 0; i < 3; i++) {
      int cur; cin >> cur;
      if (cur > a) cnt++;
    }

    cout << cnt << endl;
  }

  return 0;
}
