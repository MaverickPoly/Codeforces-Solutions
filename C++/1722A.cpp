#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  string target = "Timur";
  sort(target.begin(), target.end());
  while (t--) {
    int n;
    string st;
    cin >> n;
    cin >> st;

    sort(st.begin(), st.end());
    if (st == target) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
