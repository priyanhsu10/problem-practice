// 16. Check if a number is a perfect square

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    bool r = false;
    for (int i = 2; i < n / 2; i++)
    {

        if (i * i == n)
        {
            r = true;
        }
    }
    r ? cout << "perfect square" : cout << "not perfect square";
    return 0;
}