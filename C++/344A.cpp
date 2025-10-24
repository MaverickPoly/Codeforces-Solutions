#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (input[i] != input[i - 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
