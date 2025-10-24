#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int target = arr[k - 1];
    for (int num : arr)
    {
        if (num >= target && num > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}
