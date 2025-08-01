// 17. Find the nth prime number
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int i = 1;
    while (counter <= n)
    {
        i++;
        if (isPrime(i))
        {
            counter++;
        }
    }
    cout << i;
    return 0;
}