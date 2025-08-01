//  Find the GCD (HCF) of two numbers

#include <iostream>
using namespace std;

void gcd(int a, int b)
{

    int result = 0;

    for (int i = 2; i < a; i++)
    {

        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }
    cout << result;
}

int main()
{

    int a = 20;
    int b = 28;
    gcd(a, b);
    return 0;
}