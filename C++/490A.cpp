#include <iostream>
#include <vector>

using namespace std;

int min_3(int a, int b, int c) { return min(a, min(b, c)); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> t(n);
  for (int i = 0; i < n; i++)
    cin >> t[i];

  int pr = 0;
  int math = 0;
  int pe = 0;

  vector<int> pr_i;
  vector<int> math_i;
  vector<int> pe_i;

  for (int i = 0; i < n; i++) {
    if (t[i] == 1)
      pr_i.push_back(i);
    else if (t[i] == 2)
      math_i.push_back(i);
    else
      pe_i.push_back(i);
  }

  int limit = min_3(pr_i.size(), math_i.size(), pe_i.size());
  cout << limit << endl;
  for (int i = 0; i < limit; i++) {
    cout << pr_i[0] + 1 << " " << math_i[0] + 1 << " " << pe_i[0] + 1 << "\n";
    pr_i.erase(pr_i.begin());
    math_i.erase(math_i.begin());
    pe_i.erase(pe_i.begin());
  }

  return 0;
}
