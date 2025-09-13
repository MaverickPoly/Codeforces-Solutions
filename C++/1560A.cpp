#include <bits/stdc++.h>

using namespace std;

bool likes(int n) {
  string st = to_string(n);
  return n % 3 != 0 && st[st.size() - 1] != '3';
}

int main() {
  int t; cin >> t;

  while(t--) {
    int k; cin >> k;

    int cnt = 0;
    int cur = 0;
    int res = -1;
    while(cnt != k) {
      if (likes(cur)) {
        res = cur;
        cnt++;
      }
      cur++;
    }
    cout << res << endl;
  }

  return 0;
}
