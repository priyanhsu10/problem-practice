// Sum of digits of a number
#include <iostream>
using namespace std;
void sumdigit(int n)
{
    int tmp = n;
    int sum = 0;
    while (tmp != 0)
    {
        sum += tmp % 10;
        tmp /= 10;
    }
    cout << sum;
}
int main()
{
    int n;
    cin >> n;
    sumdigit(n);
    return 0;
}