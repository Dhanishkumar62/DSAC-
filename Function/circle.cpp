#include<iostream>
using namespace std;
double area(int radius){
  return 3.14*radius*radius;
}
int main(){
  int radius;
  cout<<"Enter radius :";
  cin>>radius;
  cout<<"Area of the circle is:"<<area(radius);
}