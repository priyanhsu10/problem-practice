// Count even and odd elements

#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1, 2, 3, 4};
    int even = 0;
    int odd = 0;
    int l = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < l; i++)
    {

        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "even : " << even << endl;
    cout << "odd: " << odd << endl;
    return 0;
}