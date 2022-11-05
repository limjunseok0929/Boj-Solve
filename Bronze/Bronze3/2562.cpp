#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    std::array<int, 9> numbers;
    int max;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> numbers[i];
    }
    max = *std::max_element(numbers.begin(), numbers.end());
    for (int i = 0; i < 9; i++)
    {
        if (numbers[i] == max)
        {
            std::cout << max << '\n'
                      << i + 1 << std::endl;
        }
    }
}