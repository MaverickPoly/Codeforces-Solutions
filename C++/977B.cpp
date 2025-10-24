#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  string st;
  cin >> st;

  map<string, int> d;
  string best;
  int best_c = 0;
  for (int i = 0; i < n - 1; i++) {
    string sub = st.substr(i, 2);
    d[sub]++;
    if (d[sub] > best_c) {
      best = sub;
      best_c = d[sub];
    }
  }
  cout << best << endl;

  return 0;
}
