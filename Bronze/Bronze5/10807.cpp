#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, numbers[101], v, cnt = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> numbers[i];
    std::cin >> v;
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == v)
            cnt++;
    }
    std::cout << cnt << std::endl;
}