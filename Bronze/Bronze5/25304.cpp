#include <iostream>

using namespace std;

int main()
{
    int check, n, sum = 0;
    std::cin >> check >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;
        sum += a * b;
    }
    if (sum == check)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}