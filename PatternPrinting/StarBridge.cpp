#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number of rows:";
  cin >> n;
  for (int i = 1; i <= (2 * n) - 1; i++)
  {
    cout << "*";
  }
  cout << endl;
  int m = n - 1;
  int nsp = 1;
  for (int j = 1; j <= m; j++)
  {
    for (int k = 1; k <= m + 1 - j; k++)
    {
      cout << "*";
    }
    for (int q = 1; q <= nsp; q++)
    {
      cout << " ";
    }

    for (int p = 1; p <= m + 1 - j; p++)
    {
      cout << "*";
    }
    nsp += 2;
    cout << endl;
  }
}