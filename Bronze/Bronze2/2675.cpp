#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, range;
    string S;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> range;
        std::cin >> S;
        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < range; j++)
            {
                std::cout << S[i];
            }
        }
        std::cout << '\n';
    }
}