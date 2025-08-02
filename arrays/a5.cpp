// Reverse the array

// Input: [1, 2, 3] → Output: [3, 2, 1]

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int l = sizeof(a) / sizeof(a[0]);
    int i = 0;
    int j = l - 1;
    while (i != j)
    {

        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }
    for (int i = 0; i < l; i++)
    {
        cout << a[i] << " ,";
    }
    return 0;
}