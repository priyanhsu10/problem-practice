// 19. Check if a number is a Harshad number

// (Divisible by sum of its digits)

#include <iostream>
using namespace std;
void harshad(int n)
{

    int tmp = n;
    int sum = 0;
    while (tmp != 0)
    {
        sum += tmp % 10;
        tmp /= 10;
    }
    n % sum == 0 ? cout << "harshad number" : cout << "not harshad number";
}
int main()
{
    int n;
    cin >> n;
    harshad(n);
    return 0;
}
