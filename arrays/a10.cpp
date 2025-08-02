// 10. Find duplicate elements
// Input: [1, 2, 2, 3] → Output: 2
// cosiderting sorted array

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 4, 5, 6, 6, 7, 8};
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 1; i < len; i++)
    {

        if (a[i - 1] == a[i])
        {
            cout << "duplicate item" << a[i];
            break;
        }
    }
    return 0;
}