// 7. Count frequency of each element

// Input: [1, 2, 2, 3] → Output: 1→1, 2→2, 3→1

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> tracker;
    int a[] = {1, 2, 2, 3};

    for (int i = 0; i < 4; i++)
    {

        if (tracker.count(a[i]) > 0)
        {
            tracker[a[i]] = tracker[a[i]] + 1;
        }
        else
        {
            tracker.insert({a[i], 1});
        }
    }
    for (auto x : tracker)
    {
        cout << x.first << "->" << x.second << " ,";
    }
    return 0;
}