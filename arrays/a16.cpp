// 15. Separate even and odd elements into two arrays

// Input: [1, 2, 3, 4] → Even: [2, 4], Odd: [1, 3]

#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ,";
    }
    cout << endl;
}
int main()
{
    int a[] = {1, 2, 3, 5, 6, 7, 8};
    int len = sizeof(a) / sizeof(a[0]);
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < len; i++)
    {

        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    print(even);
    print(odd);
    return 0;
}