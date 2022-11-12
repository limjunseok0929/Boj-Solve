#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, temp, result;
    string ox;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> ox;
        temp = 0;
        result = 0;
        for (int i = 0; i < ox.size(); i++)
        {
            if (ox[i] == 'O')
                result += ++temp;
            else
                temp = 0;
        }
        std::cout << result << std::endl;
    }
}