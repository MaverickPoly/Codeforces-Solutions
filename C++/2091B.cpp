#include <algorithm>
#include <iostream>

using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);
  reverse(arr, arr + n);

  int ans = 0;
  for (int i = 0, cnt = 1; i < n; i++, cnt++) {
    if (arr[i] * cnt >= x) {
      ans++;
      cnt = 0;
    }
  }

  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
