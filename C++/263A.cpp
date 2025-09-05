#include <iostream>
#include <vector>

using namespace std;

#define SIZE 5

int main()
{
    vector<vector<int>> array(SIZE);

    int r = -1, c = -1;

    for (int i = 0; i < SIZE; i++)
    {
        vector<int> row(SIZE);
        for (int j = 0; j < SIZE; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                r = i;
                c = j;
            }
            row[j] = n;
        }
        array[i] = row;
    }

    cout << (abs(2 - r) + abs(2 - c)) << endl;

    return 0;
}
