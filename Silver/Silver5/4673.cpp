#include <iostream>
#include <array>

using namespace std;

int d(int n)
{
    int sum = n;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    std::array<bool, 10001> array = {
        true,
    };
    int size = array.size(), temp;
    for (int i = 1; i < size; i++)
    {
        temp = d(i);
        if (temp < size)
        {
            array[temp] = false;
        }
    }
    for (int i = 1; i < size; i++)
    {
        if (array[i])
            std::cout << i << std::endl;
    }
}