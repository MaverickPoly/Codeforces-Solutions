#include <iostream>
#include <vector>

using namespace std;

int index(vector<int> v, int el)
{
    for (int i = 0; i < v.size(); i++)
        if (v[i] == el)
            return i;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    vector<int> result(n);

    for (int i = 1; i <= n; i++)
    {
        int id = index(p, i);
        result[i - 1] = id + 1;
    }

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}
