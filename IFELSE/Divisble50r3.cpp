#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the integer :";
  cin >> n;
  // Nested If else
  if (n % 5 == 0)
  {
    if (n % 3 == 0)
    {
      cout << "The number is divisible by 5 or 3 both :";
    }
    else
    {
      cout << "The number is divisible by 5 and but not 3 :";
    }
  }
  else
  {
    cout << "Not matching the condition :";
  }
}