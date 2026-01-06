#include<iostream>
using namespace std;
int main(){
  int a,b;
  int *p1=&a;
  int *p2=&b;
  cout<<"Enter 1st number:";
  cin>>*p1;
  cout<<"Enter 2nd number:";
  cin>>*p2;
  cout<<"Sum of two number using pointer:"<<*p1+*p2;
}