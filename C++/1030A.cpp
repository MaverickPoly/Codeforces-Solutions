#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int current;
        cin >> current;
        if (current == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;

    return 0;
}
