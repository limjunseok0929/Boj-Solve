#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    std::array<bool, 31> students;
    fill(students.begin(), students.end(), false);
    for (int i = 0; i < 28; i++)
    {
        int input;
        std::cin >> input;
        students[input] = true;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (!students[i])
            std::cout << i << std::endl;
    }
}