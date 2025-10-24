#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string st;
    cin >> n;
    cin >> st;

    int removals = 0;
    for (int i = 1; i < n; i++)
        if (st[i] == st[i - 1])
            removals++;

    cout << removals << endl;
    return 0;
}
