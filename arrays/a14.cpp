// 13. Right rotate the array by one

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(a) / sizeof(a[0]);

    int temp = a[len - 1];
    for (int i = len - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ,";
    }
    return 0;
}