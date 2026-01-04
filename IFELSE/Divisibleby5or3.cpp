#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the integer :";
  cin >> n;
  if (n % 5 == 0 || n % 3 == 0)
  {
    cout << "The Number is divisbile by 5 or 3 :" << n;
  }
  else
  {
    cout << "The Number isNot divisible by 5 and it is not divisible by 3 :" << n;
  }
}