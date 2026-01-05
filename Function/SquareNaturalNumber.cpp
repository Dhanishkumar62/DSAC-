#include <iostream>
using namespace std;
int square(int num)
{
  return num * num;
}
void firstNSquare(int n)
{
  for (int i = 1; i <= n; i++)
  {
    cout << i << " " << square(i) << endl;
  }
}
int main()
{
  int n;
  cout << "Enter a number :";
  cin >> n;
  firstNSquare(n);
}