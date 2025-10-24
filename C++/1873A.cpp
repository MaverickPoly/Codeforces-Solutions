#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string st;
    cin >> st;
    string target = "abc";

    int ms = 0;
    for (int i = 0; i < 3; i++) {
      if (st[i] != target[i])
        ms++;
    }

    if (ms == 3)
      cout << "NO";
    else
      cout << "YES";
    cout << endl;
  }

  return 0;
}
