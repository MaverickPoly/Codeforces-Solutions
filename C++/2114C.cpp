#include <bits/stdc++.h>
    
using namespace std;
    
int main() {
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
    
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
    
            // a.insert(num);
            a[i] = num;
        }
    
        int cnt = 1;
        int last = true;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] == a[i]) continue;
            
            if (a[i - 1] + 1 == a[i] and last) {
                last = false;
            } else {
                last = true;
                cnt++;
            }
        }
    
    
        cout << cnt << endl;
    }
    
    return 0;
}
