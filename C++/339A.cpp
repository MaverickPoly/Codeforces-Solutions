#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> split(const string &s, char delimiter)
{
    vector<string> tokens;
    string token;
    stringstream ss(s);

    while (getline(ss, token, delimiter))
        tokens.push_back(token);
    return tokens;
}

int main()
{
    string input;
    cin >> input;

    vector<string> numbers_str = split(input, '+');
    int size = numbers_str.size();
    vector<char> numbers(size);

    for (int i = 0; i < size; i++)
        numbers[i] = numbers_str[i][0];
    sort(numbers.begin(), numbers.end());

    string result;
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
            result.push_back('+');
        result.push_back(numbers[i]);
    }

    cout << result << endl;
    return 0;
}
