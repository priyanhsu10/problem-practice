// 14. Sort array in ascending/descending order

#include <iostream>
#include "a15.h"
using namespace std;
void decending(int len, int a[7])
{

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ,";
    }
    cout << endl;
}
void asending(int len, int a[7])
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] > a[j])
            {
                // swap
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ,";
    }
    cout << endl;
}
int main()
{
    int a[] = {1, 6, 3, 22, 35, 6, 2};
    int len = sizeof(a) / sizeof(a[0]);
    asending(len, a);

    decending(len, a);
    return 0;
}
