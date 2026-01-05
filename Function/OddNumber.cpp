#include <iostream>
using namespace std;
void OddNumbers(int a, int b)
{
  if (a > b)
  {
    OddNumbers(a, b);
    return;
  }
  for (int i = a; i <= b; i++)
  {
    if (i % 2 != 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}
int main()
{
  int a, b;
  cout << "Enter 1st number:";
  cin >> a;
  cout << "Enter 2nd number:";
  cin >> b;
  OddNumbers(a, b);
}