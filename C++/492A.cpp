#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;
  int l = 1;
  int i = 1;

  while (n > 0) {
    n -= l;
    count++;
    i++;
    l += i;
  }

  if (n < 0)
    count--;
  cout << count << endl;

  return 0;
}
