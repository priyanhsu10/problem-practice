// 26. Remove Duplicates from Sorted Array
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> n = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int slow = 0;
    for (int fst = 0; fst < n.size(); fst++)
    {

        if (n[slow] < n[fst])
        {
            n[slow + 1] = n[fst];
            slow++;
        }
    }
    for (int i = 0; i <= slow; i++)
    {
        cout << n[i] << " ,";
    }
    return 0;
}