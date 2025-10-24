#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string st;

    cin >> n >> t;
    cin >> st;

    while (t--)
        for (int i = 1; i < n; i++)
            if (st[i] == 'G' && st[i - 1] == 'B')
            {
                st[i] = 'B';
                st[i - 1] = 'G';
                i++;
            }

    cout << st << endl;

    return 0;
}
