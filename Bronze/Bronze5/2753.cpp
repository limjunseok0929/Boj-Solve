#include <iostream>

using namespace std;

int main()
{
    int year;
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }
}