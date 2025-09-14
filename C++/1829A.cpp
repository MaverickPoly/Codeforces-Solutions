#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  string target = "codeforces";
  while (t--) {
    string input;
    cin >> input;

    int cnt = 0;
    for (int i = 0; i < target.size(); i++) {
      if (target[i] != input[i])
        cnt++;
    }
    cout << cnt << endl;
  }

  return 0;
}
