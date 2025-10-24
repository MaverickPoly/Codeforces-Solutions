#include <iostream>
#include <string>

using namespace std;

int count(string &st, char ch)
{
    int c = 0;
    for (char el : st)
        if (el == ch)
            c++;
    return c;
}

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        string st = to_string(year);

        if (st[0] != st[1] && st[0] != st[2] && st[0] != st[3] && st[1] != st[2] && st[1] != st[3] && st[2] != st[3])
        {
            cout << st << endl;
            break;
        }
    }

    return 0;
}