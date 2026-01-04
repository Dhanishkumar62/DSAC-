#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the integer :";
  cin >> n;
  if (n % 5 == 0 && n % 3 == 0)
  {
    cout << "The Number is divisible by 5 and 3 :" << n;
  }
  else
  {
    cout << "The Number is not divisible by 5 and 3 :" << n;
  }
}