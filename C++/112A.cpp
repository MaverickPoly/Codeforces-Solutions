#include <iostream>
#include <string>

using namespace std;

int main()
{
    string st1;
    string st2;

    cin >> st1;
    cin >> st2;

    for (int i = 0; i < st1.size(); i++)
    {
        char c1 = tolower(st1[i]);
        char c2 = tolower(st2[i]);

        if (c1 < c2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (c1 > c2)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}