#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter 1st side :";
  cin >> a;
  cout << "Enter 2nd side :";
  cin >> b;
  cout << "Enetr 3rd side :";
  cin >> c;
  if ((a + b > c) && (b + c > a) && (c + a > b))
  {
    cout << "Can be sides of a triangle :";
  }
  else
  {
    cout << "Inavalid Traingle :";
  }
}