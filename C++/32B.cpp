#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  string result;
  int i = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') result.push_back('0');
    else {
      if (s[i + 1] == '.') result.push_back('1');
      else result.push_back('2');
      i++;
    }
  }

  cout << result << "\n";

  return 0;
}
