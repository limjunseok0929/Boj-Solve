#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int input, cnt = 0, n, temp;
    std::cin >> input;
    n = input;
    while (true)
    {
        temp = (input % 10) * 10 + (input / 10 + input % 10) % 10;
        cnt++;
        input = temp;
        if (n == temp)
            break;
    }
    std::cout << cnt << std::endl;
}