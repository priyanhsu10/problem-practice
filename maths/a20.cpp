// 20. Find all factors of a number
// Input: 12 → Output: 1, 2, 3, 4, 6, 12
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>> n;
  for(int i=0;i<=n;i++){
    if(n%i==0) {
        cout<< i<<" ,";
    }
  }
    return 0;
}