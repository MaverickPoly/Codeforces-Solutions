#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> levels(n);
    for (int i = 0; i < n; i++) {
        levels[i] = false;
    } 

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int a;
        cin >> a;
        levels[a - 1] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        levels[a - 1] = true;
    }

    for (bool level : levels) {
        if (!level) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    
    cout << "I become the guy." << endl;
    return 0;
}