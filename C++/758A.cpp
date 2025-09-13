#include <bits/stdc++.h>

using namespace std;

int max_ar(vector<int> ar) {
  if (ar.size() == 0) return 0;

  int m = ar[0];
  for (int el : ar)
    if (el > m) m = el;

  return m;
}

int main() {
  int n; cin >> n;

  vector<int> ar(n);
  for (int i = 0; i < n; i++) cin >> ar[i];

  int total = 0;
  int m = max_ar(ar);
  for (int i = 0; i < n; i++) {
    total += m - ar[i];
  }

  cout << total << endl;

  return 0;
}
