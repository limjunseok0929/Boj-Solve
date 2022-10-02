#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    int max;
    std::cin >> a >> b >> c;
    if (a != b && b != c && a != c)
    {
        if (a > b)
        {
            if (c > a)
            {
                max = c;
            }
            else
            {
                max = a;
            }
        }
        else
        {
            if (c > b)
            {
                max = c;
            }
            else
            {
                max = b;
            }
        }
        std::cout << max * 100 << std::endl;
    }
    else
    {
        if (a == b && a == c)
        {
            std::cout << 10000 + a * 1000 << std::endl;
        }
        else
        {
            if (a == b || a == c)
            {
                std::cout << 1000 + a * 100 << std::endl;
            }
            else
            {
                std::cout << 1000 + b * 100 << std::endl;
            }
        }
    }
}