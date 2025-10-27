#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "0000";

    char i = '1';
    while(true) {
        cout << s << endl;
        int bulls, cows;
        cin >> bulls >> cows;

        if(bulls == 0 and cows == 0) {
            break;
        }

        s = string(4, i);
        i++;
    }


    int turn = 0;
    int prev_b = 0;


    for (int i = 0; i < 50; i++) {
        cout << s << endl;
        int bulls, cows;
        cin >> bulls >> cows;

        if (bulls == prev_b) {
            s[turn]++;

            if (s[turn] == 58) {
                s[turn] = 48;
            }
        } else {
            prev_b = bulls;
            turn++;
        }

        fflush(stdout);

        if (bulls == 4) break;
    }

    return 0;
}

