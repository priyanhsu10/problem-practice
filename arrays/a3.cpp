// 3. Sum and average of array elements
// Input: [1, 2, 3, 4] → Output: Sum = 10, Avg = 2.5
#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1, 2, 3, 4};
    int l = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    double avg;
    for (int i = 0; i < l; i++)
    {
        sum += a[i];
    }
    avg = sum * 1.0 / l * 1.0;
    cout << "sum: " << sum << endl;
    cout << "average: " << avg << endl;
    return 0;
}