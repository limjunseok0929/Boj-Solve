#include <iostream>
#include <cmath>

using namespace std;

bool PrimeNumber(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, cnt = 0, input;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> input;
        if (PrimeNumber(input))
            cnt++;
    }
    std::cout << cnt << std::endl;
}