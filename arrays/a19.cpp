// 19. Find missing number in a range

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 5};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len - 1; i++)
    {
        int diff = a[i + 1] - a[i];
        if (diff > 1)
        {
            cout << "missinng number : " << a[i] + 1;
        }
    }
    return 0;
}