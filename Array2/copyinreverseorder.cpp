#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
  for (int i = 0; i < (int)a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> v;
  v.push_back(8);
  v.push_back(7);
  v.push_back(3);
  v.push_back(9);
  v.push_back(2);
  v.push_back(1);
  v.push_back(5);
  v.push_back(4);
  v.push_back(6);
  display(v);
  vector<int> v2((int)v.size());
  for (int i = 0; i < (int)v2.size(); i++)
  {
    int j = v.size() - 1 - i;
    v2[i] = v[j];
  }
  display(v2);
}