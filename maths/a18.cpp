// convert decimal to binary
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int binary[32];
    while (n != 0)
    {
        binary[i] = n % 2;

        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}
