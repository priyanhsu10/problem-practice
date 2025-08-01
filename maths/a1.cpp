//  Check if a number is prime

#include <iostream>
using namespace std;

void printPrime(int number)
{

    for (int i = 2; i < number / 2; i++)
    {

        if (number % i == 0)
        {
            cout << "not the prime" << endl;
            return;
        }
    }
    cout << number << " prime";
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);

    return 0;
}
