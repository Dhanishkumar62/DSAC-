#include <iostream>
using namespace std;
int maxthree(int a, int b, int c)
{
  if (a > b && b > c)
  {
    return a;
  }
  else if (b > c && b > a)
  {
    return b;
  }
  else
  {
    return c;
  }
}
int main()
{
  int a = 34, b = 89, c = 65;
  cout << maxthree(a, b, c);
}