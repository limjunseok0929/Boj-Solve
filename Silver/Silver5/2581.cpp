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
    int M, N, min = -1, cnt = 0;
    std::cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        if (PrimeNumber(i))
        {
            cnt += i;
            if (min == -1)
            {
                min = i;
            }
        }
    }
    if (cnt != 0)
        std::cout << cnt << '\n'
                  << min << std::endl;
    else
        std::cout << -1 << std::endl;
}