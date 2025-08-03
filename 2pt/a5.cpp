// https://leetcode.com/problems/3sum/description/
// 15. 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.

#include <iostream>
#include <vector>
#include <set>
using namespace std;
#include <map>

// bool isTaken(map<char, vector<int>> &tracker, char c, int index)
// {
//     bool found = false;
//     if (tracker[c].empty())
//     {
//         return false;
//     }
//     for (int i = 0; i < tracker[c].size(); i++)
//     {
//         if (index == tracker[c][i])
//         {
//             return true;
//         }
//     }
//     return false;
// }
int main()
{
    vector<int> num = {-1, 0, 1, 2, -1, -4};
    vector<int> hash(num.size(), 0);
    set<vector<int>> result;
    for (int i = 0; i < num.size() - 3; i++)
    {
        for (int j = i + 1; j < num.size() - 2; j++)
        {

            if (num[i] + num[j] == -num[k])
            {
                vector<int> val = {num[i], num[j], num[k]};
                sort(val.begin(), val.end());
                result.insert(val);
            }
        }
    }

    // int i = 0;
    // int j = 1;
    // int k = 2;
    // while (k < num.size())
    // {
    //     if ((num[i] + num[j] + num[k]) == 0)
    //     {
    //         vector<int> val = {num[i], num[j], num[k]};
    //         sort(val.begin(), val.end());
    //         result.insert(val);
    //         i++;
    //         j++;
    //         k++;
    //     }
    //     j++;
    //     k++;
    // else
    // {
    //     k++;
    // }
}

for (auto it : result)
{
    for (int j = 0; j < it.size(); j++)
    {
        cout << it[j] << " ,";
    }
    cout << endl;
}
}