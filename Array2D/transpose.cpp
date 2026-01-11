#include <iostream>
using namespace std;
int main()
{
  int m, n;
  cout << "Enter number of rows:";
  cin >> m;
  cout << "Enter number of columns:";
  cin >> n;
  int arr[m][n];
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // tranpose printing
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < m; i++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}