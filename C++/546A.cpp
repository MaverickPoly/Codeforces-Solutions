#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    for (int i = 0; i < w; i++)
    {
        n -= k * (i + 1);
    }
    if (n < 0)
        cout << abs(n) << endl;
    else
        cout << 0 << endl;

    return 0;
}