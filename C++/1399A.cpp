#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;


  while (t--) {
    int n; cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int i = 1;
    while (i < arr.size()) {
      if (abs(arr[i] - arr[i - 1]) <= 1) {
        if (arr[i] > arr[i - 1]) {
          arr.erase(arr.begin() + (i - 1));
        } else {
          arr.erase(arr.begin() + i);
        }
      } else {
        i++;
      }
    }

    if (arr.size() == 1) cout << "YES";
    else cout << "NO";
    cout << endl;
  }

  return 0;
}
