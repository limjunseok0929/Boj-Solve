#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (!(std::cin >> a >> b).eof())
    {
        std::cout << a + b << std::endl;
    }
}