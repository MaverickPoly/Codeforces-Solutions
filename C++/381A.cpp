#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  int sc = 0;
  int dc = 0;

  for (int i = 0; i < n; i++) {
    int cur = max(cards[0], cards[cards.size() - 1]);
    if (i % 2 == 0) {
      sc += cur;
    } else {
      dc += cur;
    }
    if (cur == cards[0]) cards.erase(cards.begin());
    else cards.pop_back();
  }

  cout << sc << " " << dc << endl;


  return 0;
}
