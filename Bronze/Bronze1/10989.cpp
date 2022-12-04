#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    std::cin >> N;
    int array[10001] = {
        0,
    };
    for (int i = 0; i < N; i++)
    {
        int input;
        std::cin >> input;
        array[input]++;
    }
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            std::cout << i << '\n';
        }
    }
}