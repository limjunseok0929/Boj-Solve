#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    std::array<int, 42> numbers;
    int result = 0;
    fill(numbers.begin(), numbers.end(), 0);
    for (int i = 0; i < 10; i++)
    {
        int input;
        std::cin >> input;
        numbers[input % 42]++;
    }
    for (int i : numbers)
    {
        if (i > 0)
            result++;
    }
    std::cout << result << std::endl;
}