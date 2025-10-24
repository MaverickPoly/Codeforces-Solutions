#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string input;

    cin >> n;
    cin >> input;

    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        cout << "Anton" << endl;
    else if (anton == danik)
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;

    return 0;
}
