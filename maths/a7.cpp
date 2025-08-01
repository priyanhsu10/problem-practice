// 7. Reverse a number
#include <iostream>
using namespace std;
void reverse(int n)
{

    int tmp = n;
    int rv = 0;
    while (tmp != 0)
    {

        rv = rv * 10 + tmp % 10;
        tmp /= 10;
    }
    cout << rv;
}
int main()
{
    int n;
    cin >> n;

    reverse(n);
    return 0;
}