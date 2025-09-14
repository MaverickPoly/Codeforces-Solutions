#include <bits/stdc++.h>

using namespace std;

// bool isPrime(int n) {
//   if (n <= 1) return false;
//   if (n <= 3) return true;
//   if (n % 2 == 0 || n % 3 == 0) return false;
//
//   int i = 5;
//   while (i * i <= n) {
//     if (n % i == 0 || n % (i + 2) == 0) return false;
//     i += 6;
//   }
//
//   return true;
// }

int main() {
  int n; cin >> n;

  // Solution 1:
  // int a = n / 2;
  // int b = a;
  // if (n % 2 != 0) b++;
  //
  // while(true) {
  //   if (!isPrime(a) && !isPrime(b)) {
  //     cout << a << " " << b << endl;
  //     break;
  //   }
  //   a--;
  //   b++;
  // }

  // Solution 2:
  if (n % 2 == 0) {
    cout << 4 << " " << n - 4 << endl;
  } else {
    cout << 9 << " " << n - 9 << endl;
  }

  return 0;
}
