#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    char character;
    std::cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> character;
        sum += character - 48;
    }
    std::cout << sum << std::endl;
    return 0;
}
