#include <iostream>
using namespace std;
int main()
{
  int marks; //ternary operator
  cout << "Enter the marks :";
  cin >> marks;
  marks >= 33 ? cout << "Pass" : cout << "Fail";
}