#include <bits/stdc++.h>

using namespace std;

long long my_pow(long long a, long long b) {
  long long res = 1;

  while (b) {
    if (b & 1)
      res = (res * a);
    a = a * a;
    b >>= 1;
  }

  return res;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> res;
    int k = 1;
    while (true) {
      long long div = my_pow(10, k) + 1;
      long long x = n / div;
      if (x * div == n)
        res.push_back(x);

      if (x == 0)
        break;
      k++;
    }

    cout << res.size();
    if (res.size())
      cout << endl;
    for (int i = (int)res.size() - 1; i >= 0; i--)
      cout << res[i] << " ";
    cout << endl;
  }

  return 0;
}
