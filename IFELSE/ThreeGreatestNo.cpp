#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter the first number :";
  cin >> a;
  cout << "Enter the second number :";
  cin >> b;
  cout << "Enter the third number :";
  cin >> c;
  if (a > b && a > c)
  {
    cout << "A is largest :" << a;
  }
  else if (b > c && b > a)
  {
    cout << "B is larget :" << b;
  }
  else
  {
    cout << "C is largest :" << c;
  }
}