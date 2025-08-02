// 2. Find the maximum and minimum element
// Input: [2, 8, 3, 1] → Output: Max = 8, Min = 1
#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 8, 3, 1};
    int max = 0;
    int min = INT16_MAX;
    int l = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < l; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    
    
    cout<< "max: " << max << endl;
    cout << "min: "<< min
    return 0;
}