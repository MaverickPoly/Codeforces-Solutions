#include <iostream>
#include <string>

int main()
{
    std::string a, b;

    std::cin >> a;
    std::cin >> b;

    std::string result;
    for (int i = 0; i < a.size(); i++)
        if ((a[i] == '1' && b[i] == '1') || (a[i] == '0' && b[i] == '0'))
            result.push_back('0');
        else
            result.push_back('1');
    std::cout << result << std::endl;

    return 0;
}