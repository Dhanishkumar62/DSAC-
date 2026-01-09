#include <iostream>
using namespace std;
int main()
{
  int arr[] = {2, 4, 5, 6, 7, 8};

  // Same address print  statement number 1
  // 0x61fef4
  // 0x61fef4
  // int* ptr=arr;
  // cout<<ptr<<endl;
  // cout<<&arr[0];

  // statement number 2
  // int*ptr=arr;
  // cout<<ptr[0]<<" ";
  // ptr[0]=9;
  // for(int i=0;i<=5;i++){
  //   cout<<ptr[i]<<" ";
  // }

  // Method number 3
  int *ptr = arr;
  *ptr = 8;
  for (int i = 0; i <= 5; i++)
  {
    cout << *ptr << " ";
    ptr++;
  }
}