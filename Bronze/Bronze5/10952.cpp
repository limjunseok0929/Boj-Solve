#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    while (true)
    {
        int a, b;
        std::cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        std::cout << a + b << std::endl;
    }
}