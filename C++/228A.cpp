#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define SIZE 4

int main()
{
    vector<int> colors(SIZE);
    for (int i = 0; i < SIZE; i++)
        cin >> colors[i];
    set<int> s(colors.begin(), colors.end());
    cout << SIZE - s.size() << endl;
    return 0;
}
