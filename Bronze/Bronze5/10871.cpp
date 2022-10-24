#include <iostream>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, X, A[10001];
    std::cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        if (A[i] < X)
        {
            std::cout << A[i] << ' ';
        }
    }
}