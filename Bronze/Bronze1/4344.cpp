#include <iostream>
#include <array>

using namespace std;

int main()
{
    int C, N, sum;
    int average;
    double persent;
    std::array<int, 1000> scores;

    std::cin >> C;
    for (int i = 0; i < C; i++)
    {
        average = 0;
        sum = 0;
        std::cin >> N;

        for (int j = 0; j < N; j++)
        {
            std::cin >> scores[j];
            average = average + scores[j];
        }
        average = average / N;
        for (int j = 0; j < N; j++)
        {
            if (scores[j] > average)
                sum++;
        }
        persent = (double)sum / N * 100;

        std::cout << fixed;
        std::cout.precision(3);
        std::cout << persent << "%" << std::endl;
    }
}