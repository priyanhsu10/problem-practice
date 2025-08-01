// 13. Check if a number is a strong number
// Input : 145 → Output : Yes(1 !+4 !+5 != 145)
#include <iostream>
using namespace std;
int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void strongNubmer(int n)
{
    int tmp = n;
    int sum = 0;
    while (tmp != 0)
    {
        sum += factorial(tmp % 10);

        tmp /= 10;
    }
    if (sum == n)
    {
        cout << "stong number";
    }
    else
    {
        cout << "not strong number";
    }
}
int main()
{
    int n;
    cin >> n;
    strongNubmer(n);
    return 0;
}