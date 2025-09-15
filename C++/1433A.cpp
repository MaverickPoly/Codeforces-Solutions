#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string n;
    cin >> n;

    int x = n[0] - '0' - 1;
    int y = n.size();

    int result = x * 10;
    for (int i = 1; i <= y; i++) {
      result += i;
    }

    cout << result << endl;
  }

  return 0;
}
