#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        bool found = false;
        for (int repeat = 0; repeat <= 5; repeat++)
        {
            if (s1.find(s2) != string::npos)
            {
                found = true;
                cout << repeat << endl;
                break;
            }
            s1 += s1;
        }

        if (!found)
            cout << -1 << endl;
    }

    return 0;
}
