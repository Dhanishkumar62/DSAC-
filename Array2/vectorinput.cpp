#include <iostream>
#include <vector>
using namespace std;
int main()
{

  // method number 1
  // vector<int> v(6);
  // for(int i=0;i<6;i++){
  //   cin>>v[i];
  // }
  // for(int i=0;i<6;i++){
  //   cout<<v[i];
  // }

  // method no 2
  vector<int> v;
  int n = v.size();
  cout << "Eneter vector size:";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cout << "Eneter element:";
    cin >> x;
    v.push_back(x);
  }
  cout << "vector element are:";
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
}