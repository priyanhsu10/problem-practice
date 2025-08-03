// 344. Reverse String
// Input: s = ["h","e","l","l","o"]
// // Output: ["o","l","l","e","h"]
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    int i = 0;
    int j = s.size() - 1;
    while (i != j)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << ",";
    }
    return 0;
}