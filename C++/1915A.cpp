#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t; cin >> t;

  auto count_ar = [&](vector<int> ar, int el) {
    int cnt = 0;
    for (int i = 0; i < ar.size(); i++)
      if (ar[i] == el) cnt++;
    return cnt;
  };

  while(t--) {
    int a, b, c; cin >> a >> b >> c;
    vector<int> ar = {a, b, c};

    for(int i = 0; i < ar.size(); i++) {
      if (count_ar(ar, ar[i]) == 1) {
        cout << ar[i] << "\n";
        break;
      }
    }
  }

  return 0;
}
