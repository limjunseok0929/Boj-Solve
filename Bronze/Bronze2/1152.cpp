#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int cnt = 1;
    string S;
    getline(cin, S);
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == ' ')
            cnt++;
    }
    if (S[0] == ' ')
        cnt--;
    if (S[S.length() - 1] == ' ')
        cnt--;
    std::cout << cnt << std::endl;
}