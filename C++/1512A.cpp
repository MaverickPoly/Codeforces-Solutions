#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  auto count_ar = [&](vector<int> arr, int el) {
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] == el) cnt++;
    }
    return cnt;
  };

  while(t--) {
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
      if (count_ar(arr, arr[i]) == 1) {
        cout << i + 1 << endl;
        break;
      }
    }
  }

  return 0;
}
