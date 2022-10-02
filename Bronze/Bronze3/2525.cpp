#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int min;
    int hour, minute;
    std::cin >> a >> b >> c;
    min = 60 * a + b;
    min += c;
    hour = (min / 60) % 24;
    minute = min % 60;
    std::cout << hour << " " << minute << std::endl;
}