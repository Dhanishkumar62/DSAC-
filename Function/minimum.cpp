#include <iostream>
using namespace std;
int mini(int x, int y)
{
  int a;
  if (x < y)
  {
    a = x;
  }
  else
  {
    a = y;
  }
  return a;
}
int main()
{
  int a, b;
  cout << "Enter 1st number :";
  cin >> a;
  cout << "Enter 2nd number :";
  cin >> b;
  cout << mini(a, b) << " ";
}