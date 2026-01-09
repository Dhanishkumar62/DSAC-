#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int x;
  cout << "Enter the number which is doublest sum:";
  cin >> x;
  vector<int> v;
  int n = v.size();
  cout << "Enter arry size:";
  cin >> n;
  cout << "Enter array element:";
  for (int i = 0; i < n; i++)
  {
    int q;
    cin >> q;
    v.push_back(q);
  }
  cout << "Pairs of sum:" << x << endl;
  for (int i = 0; i <= n - 2; i++)
  {
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (v[i] + v[j] == x)
      {
        cout << "(" << i << " " << j << ")" << " " << v[i] << " + " << v[j] << endl;
      }
    }
  }
}