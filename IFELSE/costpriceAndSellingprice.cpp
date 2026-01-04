#include <iostream>
using namespace std;
int main()
{
  int cp, sp;
  cout << "Enter the cost price :";
  cin >> cp;
  cout << "Enter the selling price :";
  cin >> sp;
  if (sp > cp)
  {
    cout << "Profit :" << sp - cp;
  }
  else
  {
    cout << "Loss : " << cp - sp;
  }
}