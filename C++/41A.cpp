#include <iostream>
#include <string>

void reverseString(std::string &st)
{
    int start = 0;
    int end = st.size() - 1;

    while (start < end)
    {
        char temp = st[start];
        st[start] = st[end];
        st[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    std::string st1;
    std::string st2;

    std::cin >> st1;
    std::cin >> st2;

    // Reverse st1
    reverseString(st1);

    if (st1 == st2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
