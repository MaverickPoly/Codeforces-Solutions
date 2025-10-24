#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int p, q; // p - number of people, q - capacity

    cin >> n;
    int total = 0;

    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}
