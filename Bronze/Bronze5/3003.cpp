#include <iostream>

using namespace std;

int main()
{
    int chess[6] = {1, 1, 2, 2, 2, 8}, input[6];
    for (int i = 0; i < 6; i++)
    {
        std::cin >> input[i];
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << chess[i] - input[i] << " ";
    }
}