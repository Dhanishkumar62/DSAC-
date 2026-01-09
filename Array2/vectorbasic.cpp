#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(6);
  v.push_back(9);
  v.push_back(16);
  v.push_back(34);
  v.push_back(62);
  v.push_back(93);
  v.push_back(34);
  v.push_back(62);
  v.push_back(93);

  // cout<<v[0]<<" ";
  // cout<<v[1];

  cout << v.size() << endl;
  cout << v.capacity() << endl;
}