#include <iostream>
#include <string>

using namespace std;

int main()
{
    int alphabet[26] = {
        0,
    };
    int max[2] = {alphabet[0], 0};
    int cnt = 0;
    string word;
    std::cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] < 97)
            alphabet[word[i] - 65]++;
        else
            alphabet[word[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > max[0])
        {
            max[0] = alphabet[i];
            max[1] = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == max[0])
            cnt++;
    }
    if (cnt > 1)
        std::cout << '?' << std::endl;
    else
        std::cout << (char)(max[1] + 65) << std::endl;
}