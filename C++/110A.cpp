#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < input.size(); i++)
    {
        char ch = input[i];
        if (ch == '7' || ch == '4')
            count++;
    }

    if (count == 7 || count == 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
