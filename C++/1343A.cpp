#include <bits/stdc++.h>

using namespace std;

int mod_pow(int a, int b) {
    int m = 1e9;
    int res = 1;
    a %= m;

    while(b > 0) {
        if (b & 1) res = (a * res) % m;
        a = (a * a) % m;
        b >>= 1;
    }

    return res;    
}

bool isInteger(double x) {
    double integral_part;
    return modf(x, &integral_part) == 0.0;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        int k = 2;
        while(true) {
            // cout << "- " << k << " " << mod_pow(2, k) << endl;
            double b = (-n) / (1.0 - mod_pow(2, k));
            if (b > 0 and floor(b) == b) {
                // cout << "\t";
                cout << int(b) << endl;
                break;
            }
            k++;
        }
    }

    return 0;
}
