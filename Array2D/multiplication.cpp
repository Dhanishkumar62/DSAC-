#include <iostream>
using namespace std;
int main()
{
  int m, n;
  cout << "Eneter rows of 1st matrix:";
  cin >> m;
  cout << "Eneter columns of 1st matrix:";
  cin >> n;

  int p, q;
  cout << "Eneter rows of 2nd matrix:";
  cin >> p;
  cout << "Eneter columns of 2nd matrix:";
  cin >> q;

  int a[m][n];
  int b[p][q];
  if (n == p)
  {
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
      }
    }
    cout << endl;
    for (int i = 0; i < p; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cin >> b[i][j];
      }
    }
    cout << endl;
    // resultan matrix;
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        res[i][j] = 0;
        for (int k = 0; k < p; k++)
        {
          res[i][j] += a[i][k] * b[k][j];
        }
      }
    }

    // print
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "The matrices canot be multiplied:";
  }
}