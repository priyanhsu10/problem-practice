// 5. Check if a number is an Armstrong number
#include <iostream>
#include <cmath>
using namespace std;

void isArmstrong(int n)
{

    int tmp = n;
    int arm = 0;
    while (tmp != 0)
    {
        arm += pow(tmp % 10, 3);
        tmp = tmp / 10;
        cout << arm << endl;
    }

    cout << arm << endl;
    if (n == arm)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
}
int main()
{
    int n;
    cin >> n;

    isArmstrong(n);
}