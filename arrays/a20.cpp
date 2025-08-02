#include <iostream>
using namespace std;
// 20. Find leaders in an array
// (Element is leader if it is greater than all elements to its right)
// Input: [16, 17, 4, 3, 5, 2] → Output: 17, 5, 2

int main()
{
    int a[] = {6, 17, 4, 3, 5, 2};
    int len = sizeof(a) / sizeof(a[0]);
    int slow = len - 1;

    for (int fast = len - 1; fast > 0; fast--)
    {

        if (a[slow] <= a[fast])
        {
            slow = fast;
            cout << a[slow] << " ,";
        }
    }
    return 0;
}