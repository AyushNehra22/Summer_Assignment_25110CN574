//wap to print multiplication table of a given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  cout<<" Multiplication table "<< n <<endl;
  for(int i=1;i<=10;i++){
    cout<< n*i <<endl;
  }
  return 0;
}