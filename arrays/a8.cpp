// . Find second largest element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    int largest = INT_MIN;
    int sec = -1;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > largest)
        {
            sec = largest;
            largest = vec[i];
        }
        else if (vec[i] > sec && vec.at(i) < largest)
        {
            sec = vec[i];
        }
    }
    cout << "largest :" << largest << endl;
    cout << "second : " << sec << endl;
    return 0;
}