#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the integer :";
  cin >> n;
  if (n >= 100 && n <= 1000)
  {
    cout << "Three Digit Number :" << n;
  }
  else
  {
    cout << "Not a Three Digit Number :" << n;
  }
}