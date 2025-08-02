// 11. Remove duplicate elements (keep only unique)
// Input: [1, 2, 2, 3] → Output: [1, 2, 3]
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 3, 4, 5};
    map<int, int> tracker;
    vector<int> result;
    for (int i = 0; i < vec.size(); i++)
    {
        if (tracker.count(vec[i]) > 0)
        {

            continue;
        }
        else
        {
            tracker.insert({vec[i], 1});
            result.push_back(vec[i]);
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ,";
    }
    return 0;
}