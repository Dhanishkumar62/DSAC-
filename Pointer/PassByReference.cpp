#include<iostream>
using namespace std;
void swap(int *x, int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
  return;
}
int main(){
  int a,b;
  cout<<"Eneter 1st number:";
  cin>>a;
  cout<<"Eneter 2nd number:";
  cin>>b;
  swap(&a,&b);
  cout<<a<<" "<<b;
}