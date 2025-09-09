#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string input;
    getline(cin, input, '\n');

    set<char> s;

    for (int i = 0; i < input.size(); i++) {
        char ch = input[i];
        if (isalpha(ch)) {
            s.insert(ch);
        }
    }

    cout << s.size() << endl;

    return 0;
}