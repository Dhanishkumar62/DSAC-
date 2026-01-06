#include<iostream>
using namespace std;
int main(){
  int x=4;
  int* p=&x;
  // same address print
  cout<<&x<<endl;    
  cout<<p;
}