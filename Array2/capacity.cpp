#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(9);
  v.push_back(19);
  v.push_back(20);
  v.push_back(45);
  v.push_back(90);
  v.push_back(23);
  v.push_back(34);
  v.push_back(12);
  v.push_back(18);
  v.push_back(96);
  cout << "capacity is:" << v.capacity() << endl;
  cout << "size is:" << v.size();
  v.pop_back();
  cout << endl;
  cout << "size is:" << v.size() << endl;
  // capacity not change
  cout << "capacity is:" << v.capacity();
}