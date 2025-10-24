#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while(t--) {
    vector<int> ar(3);
    for (int i = 0; i < 3; i++) cin >> ar[i];
    sort(ar.begin(), ar.end());
    if (ar[2] + ar[1] >= 10) cout << "YES";
    else cout << "NO";
    cout << endl;
  }

  return 0;
}
