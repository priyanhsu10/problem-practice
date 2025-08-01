
//  Generate Fibonacci series up to N terms
#include <iostream>
using namespace std;

int main()
{
    int n1 = 0;
    int n2 = 1;

    int n;
    cin >> n;

    int fib = 0;
    cout << n1 << ", " << n2 << " ,";
    for (int i = 2; i < n; i++)
    {
        fib = n1 + n2;
        cout << fib << " ,";
        n1 = n2;
        n2 = fib;
    }
    return 0;
}