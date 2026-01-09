#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(8);
  v.push_back(18);
  v.push_back(9);
  v.push_back(7);
  v.push_back(7);
  v.push_back(5);
  v.push_back(4);
  v.push_back(3);
  int x = 9;
  int idx = -1;
  for (int i = 0; i < (int)v.size(); i++)
  {
    if (v[i] == x)
    {
      idx = i;
    }
  }
  cout << idx;
}