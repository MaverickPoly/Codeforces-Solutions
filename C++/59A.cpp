#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int upperCount = 0;
    int lowerCount = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (islower(input[i]))
            lowerCount++;
        else
            upperCount++;
    }

    if (upperCount > lowerCount)
        for (int i = 0; i < input.size(); i++)
            input[i] = toupper(input[i]);
    else
        for (int i = 0; i < input.size(); i++)
            input[i] = tolower(input[i]);

    cout << input << endl;

    return 0;
}
