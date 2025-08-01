// Count the number of digits in a number
#include <iostream>
using namespace std;
void count(int n)
{
    int couter = 0;
    while (n != 0)
    {
        n /= 10;
        couter++;
    }
    cout << couter << endl;
}

int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}