// 12. Left rotate the array by one
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);
    int temp = a[0];
    for (int i = 1; i < len; i++)
    {
        a[i - 1] = a[i];
    }
    a[len - 1] = temp;

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ,";
    }
    return 0;
}