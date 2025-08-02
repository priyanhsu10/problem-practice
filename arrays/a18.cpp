// 17. Move all zeros to end
// Input: [0, 1, 0, 3, 12] → Output: [1, 3, 12, 0, 0]
#include <iostream>
using namespace std;
void naive(int len, int *a)
{
    int j = 0;

    int b[len];
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
        else
        {
            b[j] = a[i];
            j++;
        }
    }
    for (int i = count; i < len; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {

        cout << b[i] << " ,";
    }
}

void twopointer(int *a, int len)
{
    int i = 0;

    for (int j = 0; j < len; j++)
    {

        if (a[j] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << ", ";
    }
}
int main()
{
    int a[] = {0, 1, 0, 3, 12, 0};
    int len = sizeof(a) / sizeof(a[0]);
    // naive(len, a);
    twopointer(a, len);

    return 0;
}