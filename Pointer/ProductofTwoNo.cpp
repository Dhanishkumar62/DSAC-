#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Eneter 1st number:";
  cin>>a;
  cout<<"Eneter 2nd number:";
  cin>>b;
  int *ptr1=&a;
  int *ptr2=&b;
  int ans;
  int *ptrAns=&ans;
  *ptrAns=(*ptr1)*(*ptr2);
  cout<<"product of two number:"<<*ptrAns;
}