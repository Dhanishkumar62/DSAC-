#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
  // no of rows -> index 0-2
  // no of columns -> index 0-2

  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i <= 2; i++)
  { // i is row no
    for (int j = 0; j <= 2; j++)
    { // is column no
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}