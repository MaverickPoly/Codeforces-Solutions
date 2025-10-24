#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    vector<int> ar = {a, b, c};
    sort(ar.begin(), ar.end());
    cout << ar[1] << endl;
  }

  return 0;
}
