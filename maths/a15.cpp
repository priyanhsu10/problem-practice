// 15. Find sum of squares of first N natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    // sum = n << 1 * ((n << 1) + 1) / 2;
    cout << sum;
    return 0;
}