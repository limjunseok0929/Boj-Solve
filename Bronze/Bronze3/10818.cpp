#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    std::cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, a[1000001];
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> a[i];
    sort(a, a + N);
    std::cout << a[0] << ' ' << a[N - 1];
}