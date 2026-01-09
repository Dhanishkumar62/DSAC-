#include <iostream>
using namespace std;
void display(int arr[])
{
  for (int i = 0; i <= 4; i++)
  {
    cout << arr[i] << " ";
  }
  return;
}
int main()
{
  int arr[5] = {2, 3, 6, 23, 45};
  display(arr);
}