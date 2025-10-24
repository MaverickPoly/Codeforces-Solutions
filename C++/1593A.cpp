#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int da = max(0, max(b, c) - a + 1);
        int db = max(0, max(a, c) - b + 1);
        int dc = max(0, max(a, b) - c + 1);

        cout << da << " " << db << " " << dc << endl;
    }

    return 0;
}
