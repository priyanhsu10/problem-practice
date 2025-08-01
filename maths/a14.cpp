// 14. Find sum of first N natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout<< sum;
    return 0;
}