#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t; cin >> t;
 
    /*
    5
    4
    2 4 1
    3
    1 1
    6
    4 2 5 1 2
    2
    500
    3
    1 5
 
    3 5 9 10 
    2 3 4 
    5 9 11 16 17 19 
    501 1001 
    2 3 8 
 
    */
 
    while(t--) {
        int n; cin >> n;
 
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) cin >> x[i];
 
        vector<int> a(n);
        a[0] = 1000 * x[0] + 1;
 
        for (int i = 1; i < n; i++) {
            a[i] = x[i - 1] + a[i - 1];
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
