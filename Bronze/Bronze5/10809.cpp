#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string ch;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    std::cin >> ch;
    for (int i = 0; i < alph.length(); i++)
    {
        std::cout << (int)ch.find(alph[i]) << ' ';
    }
}