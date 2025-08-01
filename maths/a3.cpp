#include <iostream>
using namespace std;
// Find the LCM of two numbers

void lcm(int a, int b)
{
    for (int i = 1; i < b; i++)
    {

        if (a * i % b == 0)
        {
            cout << "LCM :" << a * i << endl;
            break;
        }
    }
}
int main()
{
    int a = 10;
    int b = 15;
    lcm(a, b);
    return 0;
}