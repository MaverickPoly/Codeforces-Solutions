#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long steps = (b - (a % b)) % b;
        result.push_back(steps);
    }

    for (int step : result)
        cout << step << endl;

    return 0;
}