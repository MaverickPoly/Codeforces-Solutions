#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int m = max(x, y);
  int num = 7 - m;
  int d = 6;

  int g = gcd(num, 6);

  cout << num / g << "/" << d / g << endl;

  return 0;
}
