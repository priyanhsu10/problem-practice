//  Find the element with maximum frequency

// Input: [1, 2, 2, 3, 2] → Output: 2

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 3, 2, 2};
    int len = sizeof(a) / sizeof(a[0]);
    map<int, int> tracker;
    for (int i = 0; i < len; i++)
    {

        if (tracker.count(a[i])>0)
        {
            tracker[a[i]] = tracker[a[i]] + 1;
        }
        else
        {
            tracker.insert({a[i], 1});
        }
    }
    int i;
    int max = 0;
    for (pair<int, int> t : tracker)
    {
        if (max < t.second)
        {
            max = t.second;
            i = t.first;
        }
    }
    cout << "value: " << i << " repeat:" << max;
    return 0;
}