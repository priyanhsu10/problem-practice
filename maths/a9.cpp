// Print all prime numbers in a given range
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
void prime(int a, int b)
{

    for (; a < b; a++)
    {
        if (isPrime(a))
        {
            cout << a << ",";
        }
    }
}
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    prime(a, b);
    return 0;
}