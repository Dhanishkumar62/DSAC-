#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> v;

  v.push_back(18);
  v.push_back(8);
  v.push_back(3);
  v.push_back(23);
  v.push_back(56);
  v.push_back(0);
  v.push_back(99);
  v.push_back(1);
  v.push_back(78);

  int n = v.size();
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
}