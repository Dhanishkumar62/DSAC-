#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of rows :";
  cin>>n;
  for(int f=1;f<=2*n-1;f++){
    cout<<f;
  }
  cout<<endl;
  int m=n-1;
  int nsp=1;
   
  for(int i=1;i<=m;i++){
    int a=1;
    for(int j=1;j<=m+1-i;j++){
        cout<<a;
        a++;
    }
    for(int q=1;q<=nsp;q++){
      cout<<" ";
    }
     nsp+=2;
    for(int x=1;x<=m+1-i;x++){
      cout<<a;
      a++;
    }
    cout<<endl;
  }
}