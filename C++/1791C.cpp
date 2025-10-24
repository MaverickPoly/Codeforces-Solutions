#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    string st;
    cin >> n;
    cin >> st;

    int left = 0;
    int right = n - 1;

    while (left < right and st[left] != st[right]) {
      n -= 2;
      right--;
      left++;
    }
    cout << n << endl;
  }

  return 0;
}
