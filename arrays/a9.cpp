// 9. Check if array is sorted
// Input: [1, 2, 3] → Output: Sorted

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 23, 5, 6, 7};
    int sorted = true;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i - 1] > vec[i])
        {
            sorted = false;
            break;
        }
    }
    sorted ? cout << "sorted" : cout << "not sorted";
    return 0;
}