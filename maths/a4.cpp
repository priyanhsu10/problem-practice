// Check if a number is a palindrome
#include <iostream>
using namespace std;
void isPalindrom(int n)
{
    // 123
    //  123%10 --> 3
    //  123/10--> 12
    //  12%/10--. 2
    //  12/10 --> 1
    int pd = 0;
    int reverse;
    int original = n;
    while (n / 10 > 0)
    {
        pd = pd * 10 + n % 10;
        n = n / 10;
    }
    reverse = pd * 10 + n;
    if (reverse == original)
    {

        cout << "panlidrome number";
    }
    else
    {
        cout << "not palidrome";
    }
}
int main()
{

    int n;
    cin >> n;
    isPalindrom(n);
    return 0;
}