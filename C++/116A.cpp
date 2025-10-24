#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    int current = 0;
    int capacity = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        current = current - a + b;
        capacity = max(capacity, current);
    }
    cout << capacity << endl;

    return 0;
}