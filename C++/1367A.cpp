#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string b;
    cin >> b;

    string result = b.substr(0, 1);

    for (int i = 1; i < b.size() - 1; i += 2) {
      result += b[i];
    }

    result += b[b.size() - 1];
    cout << result << endl;
  }

  return 0;
}
