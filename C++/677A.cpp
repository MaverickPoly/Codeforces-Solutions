#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, h;

    cin >> n >> h;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int current;
        cin >> current;
        if (current <= h)
            result += 1;
        else
            result += 2;
    }
    cout << result << endl;

    return 0;
}