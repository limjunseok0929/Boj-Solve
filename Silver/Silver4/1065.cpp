#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, cnt = 0;
    int one, ten, hun;
    std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i < 100)
            cnt++;
        else
        {
            one = i % 10, ten = (i / 10) % 10, hun = i / 100;
            if (ten - one == hun - ten)
                cnt++;
        }
    }
    std::cout << cnt << std::endl;
}