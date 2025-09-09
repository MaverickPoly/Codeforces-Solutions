#include <iostream>
#include <vector>

using namespace std;

int max(vector<int> vec) {
    int m = 0;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] > vec[m])
            m = i;
    return m;
}

int min(vector<int> vec) {
    int m = 0;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] <= vec[m])
            m = i;
    return m;
}


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int max_index = max(vec);
    int min_index = min(vec);

    int steps = (max_index) + (n - min_index - 1);
    if (max_index > min_index) {
        steps--;
    }
    cout << steps << endl;

    return 0;
}