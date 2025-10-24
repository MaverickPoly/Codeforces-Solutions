#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  auto sum_d = [&](char a, char b, char c) {
    return (a - '0') + (b - '0') + (c - '0');
  };

  while(t--) {
    string inp; cin >> inp;

    if (sum_d(inp[0], inp[1], inp[2]) == sum_d(inp[3], inp[4], inp[5])) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
