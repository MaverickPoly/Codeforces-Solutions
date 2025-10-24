#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  auto min_arr = [&](vector<long long> arr) {
    int m = arr[0];
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] < m)
        m = arr[i];
    }
    return m;
  };

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int min_val = min_arr(a);
    bool flag = false;
    long long product = 1;
    for (long long el : a) {
      if (el == min_val and !flag) {
        product *= (el + 1);
        flag = true;
      } else {
        product *= el;
      }
    }
    cout << product << endl;
  }

  return 0;
}
