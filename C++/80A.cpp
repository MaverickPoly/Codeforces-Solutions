#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 or n % 3 == 0)
    return false;

  int i = 5;
  while (i * i <= n) {
    if (n % i == 0 or n % (i + 2) == 0)
      return false;
    i += 6;
  }

  return true;
}

string result(int n, int m) {
  if (!isPrime(m)) {
    return "NO";
  }

  for (int i = n + 1; i < m; i++) {
    if (isPrime(i)) {
      return "NO";
    }
  }
  return "YES";
}

int main() {
  int n, m;
  cin >> n >> m;

  string res = result(n, m);
  cout << res << endl;

  return 0;
}
