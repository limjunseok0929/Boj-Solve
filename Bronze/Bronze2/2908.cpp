#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    std::cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (stoi(a) > stoi(b))
    {
        std::cout << a << std::endl;
    }
    else
    {
        std::cout << b << std::endl;
    }
}