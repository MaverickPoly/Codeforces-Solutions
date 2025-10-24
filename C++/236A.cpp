#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string st;
    cin >> st;
    vector<char> chars;

    for (int i = 0; i < st.size(); i++)
    {
        if (find(chars.begin(), chars.end(), st[i]) == chars.end())
            chars.push_back(st[i]);
    }

    if (chars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}