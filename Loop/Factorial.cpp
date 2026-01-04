#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a integer :";
  cin>>n;
  int product=1;
  for(int i=1;i<=n;i++){
    product*=i;
  }
  cout<<"Factorial number:"<<product;
}