#include <iostream>

using namespace std;

int d(int n)
{
    int sum = n;

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    bool boolean[10001] = {
        false,
    };
    for (int i = 1; i < 10001; i++)
    {
        int n = d(i);
        if (n < 10001)
        {
            boolean[n] = true;
        }
    }
    for (int i = 1; i < 10001; i++)
    {
        if (!boolean[i])
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}