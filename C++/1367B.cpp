#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    int evens = 0, odds = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] % 2 == 0)
        evens++;
      else
        odds++;
    }

    int need_even = (n + 1) / 2;
    int need_odd = n / 2;

    if (need_even != evens or need_odd != odds) {
      cout << -1 << endl;
      continue;
    }

    int wrong_cnt = 0;
    for (int i = 0; i < n; i++) {
      if (i % 2 != arr[i] % 2) {
        wrong_cnt++;
      }
    }
    cout << wrong_cnt / 2 << endl;
  }

  return 0;
}
