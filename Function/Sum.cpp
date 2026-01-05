#include <iostream>
using namespace std;
int sum(int x, int y)
{
  return x + y;
}
int main()
{
  int n, m;
  cout << "Enter 1st no :";
  cin >> n;
  cout << "Enter 2nd no :";
  cin >> m;
  cout << sum(n, m);
}