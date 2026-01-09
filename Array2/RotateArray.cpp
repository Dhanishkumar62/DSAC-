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
void reversePart(vector<int> &v, int i, int j)
{
  while (i < j)
  {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
  }
  return;
}
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);
  display(v);
  int n = v.size();
  int k = 3;
  if (n == 0)
    return 0;
  k = k % n;

  reversePart(v, 0, n - 1);
  reversePart(v, 0, k - 1);
  reversePart(v, k, n - 1);
  display(v);
}