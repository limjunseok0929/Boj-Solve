#include <iostream>

using namespace std;

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << ">" << std::endl;
    }
    else if (a < b)
    {
        std::cout << "<" << std::endl;
    }
    else if (a == b)
    {
        std::cout << "==" << std::endl;
    }
}