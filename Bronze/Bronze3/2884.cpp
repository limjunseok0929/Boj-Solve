#include <iostream>

using namespace std;

int main()
{
    int a, b;
    std::cin >> a >> b;
    b -= 45;
    if (b < 0)
    {
        b += 60;
        a--;
        if (a == -1)
        {
            a = 23;
        }
    }
    std::cout << a << " " << b << std::endl;
}