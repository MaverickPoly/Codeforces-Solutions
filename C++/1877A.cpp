#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n - 1);

    int s = 0;
    for (int i = 0; i < n - 1; i++) {
      cin >> arr[i];
      s += arr[i];
    }
    s *= -1;
    cout << s << endl;
  }

  return 0;
}
