#include <iostream>
#include <array>

using namespace std;

int main()
{
    int N, max = 0;
    float answer = 0;
    std::array<int, 1001> scores;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> scores[i];
        if (scores[i] > max)
            max = scores[i];
        answer += scores[i];
    }
    answer = (answer / max * 100) / N;
    cout << fixed;
    cout.precision(6);
    cout << answer << endl;
}