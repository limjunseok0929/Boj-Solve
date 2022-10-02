#include <iostream>

using namespace std;

int main()
{
    int score;
    std::cin >> score;
    if (score <= 100 && score >= 90)
    {
        std::cout << "A" << std::endl;
    }
    else if (score <= 89 && score >= 80)
    {
        std::cout << "B" << std::endl;
    }
    else if (score <= 79 && score >= 70)
    {
        std::cout << "C" << std::endl;
    }
    else if (score <= 69 && score >= 60)
    {
        std::cout << "D" << std::endl;
    }
    else
    {
        std::cout << "F" << std::endl;
    }
}