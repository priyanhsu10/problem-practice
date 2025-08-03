// 167. Two Sum II - Input Array Is Sorted

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n = {2, 7, 11, 15};

    int i = 0;
    int j = n.size() - 1;
    int target = 26;
    while (i < j)
    {
        int sum = n[i] + n[j];
        if (sum == target)
        {

            cout << i << "," << j << endl;
            break;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}