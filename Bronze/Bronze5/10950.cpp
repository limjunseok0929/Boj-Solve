#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
}