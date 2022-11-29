#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n > 2)
    {
        n *= factorial(n - 1);
    }
    return n;
}

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, result = 1;
    std::cin >> N;
    if (N != 0)
    {
        result = factorial(N);
    }
    std::cout << result << std::endl;
}