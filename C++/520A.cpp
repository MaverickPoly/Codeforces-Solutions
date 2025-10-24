#include <iostream>
#include <string>

using namespace std;

int count(string st, char ch) {
    int count = 0;
    for (char c : st) 
        if (tolower(c) == ch)
            count++;
    
    return count;
}

int main() {
    int n;
    cin >> n;

    string word;
    cin >> word;

    for (int i = 0; i < 26; i++) {
        if (count(word, 97 + i) == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}