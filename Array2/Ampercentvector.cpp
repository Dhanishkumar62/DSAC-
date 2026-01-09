#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a)
{
  a[0] = 100;
}
int main()
{
  vector<int> v;
  v.push_back(8);
  v.push_back(18);
  v.push_back(32);
  v.push_back(23);
  v.push_back(10);
  int n = v.size();
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  change(v);
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
}