#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter base:";
  cin>>a;
  cout<<"Enter Exponent:";
  cin>>b;
  int pow=1;
  for(int i=1;i<=b;i++){
    pow=pow*a;
  }
  cout<<"Power:"<<pow;
}