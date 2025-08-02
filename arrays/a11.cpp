// 10. Find duplicate elements in unsoretd item ;

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{

    vector<int> a = {1, 2, 4, 5, 6, 2, 3};
    map<int, int> tracker;
    for (int i = 0; i < a.size(); i++)
    {
        if (tracker.count(a[i]) > 0)
        {
            cout << "duplicate item : " << a[i] << endl;
            break;
        }
        else
        {
            tracker.insert({a[i], 1});
        }
    }
    return 0;
}