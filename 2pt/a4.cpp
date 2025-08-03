// 125. Valid Palindrome
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s = "A man, a plan, a canal: Panama";

    // string s = "race a car";
    int i = 0;
    int j = s.size() - 1;
    bool isPalindrom = true;
    while (i != j)
    {
        char c = tolower(s[i]);
        ;
        if (!(c >= 97 && c <= 122))
        {
            i++;
            continue;
        }
        char c2 = tolower(s[j]);
        if (!(c2 >= 97 && c2 <= 122))
        {
            j--;
            continue;
        }
        if (c == c2)
        {
            i++;
            j--;
        }
        else
        {
            isPalindrom = false;
            break;
        }
    }
    isPalindrom ? cout << "palindrom" : cout << "no palidrom";

    return 0;
}