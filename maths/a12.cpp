// 12. Check if a number is a perfect number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "perfect nubmer";
    }
    else
    {
        cout << "not perfect number";
    }
    return 0;
}