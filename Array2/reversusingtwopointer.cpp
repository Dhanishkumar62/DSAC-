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
  v.push_back(9);
  v.push_back(7);
  v.push_back(6);
  v.push_back(15);
  v.push_back(23);
  v.push_back(12);
  v.push_back(11);
  v.push_back(99);
  display(v);
  int i = 0;
  int j = v.size() - 1;
  while (i <= j)
  {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
  }
  display(v);
}