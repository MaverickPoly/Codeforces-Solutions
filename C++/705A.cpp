#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string result;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            result.append("I love that ");
        else
            result.append("I hate that ");
    }

    result = result.substr(0, result.size() - 5);
    result.append("it");
    cout << result << endl;

    return 0;
}
