// Search 3 in [1, 3, 5] → Output: Found at index 1

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 4, 5, 6, 7, 8, 12, 14, 45, 46};
    int size = sizeof(a) / sizeof(a[0]);
    int item;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ,";
    }
    cout << endl;
    cin >> item;
    int l = 0;
    int r = size - 1;

    int mid = -1;
    int found = -1;
    while (l < r)
    {
        mid = (r + l) / 2;

        if (item == a[mid])
        {
            found = mid;
            break;
        }
        if (item > a[mid])
        {
            l = mid;
        }
        if (item < a[mid])
        {
            r = mid;
        }
    }
    found == -1 ? cout << "item not found" : cout << "item found at index: " << found;
}