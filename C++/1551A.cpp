#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int div = n / 3;
        int remainder = n % 3;

        int ones = div;
        int twos = div;
        if (remainder == 1) ones++;
        else if (remainder == 2) twos++;

        cout << ones << " " << twos << endl;
    }

    return 0;
}