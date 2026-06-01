//wap to find factorial of a given number

#include<iostream>
using namespace std;
int main(){
int n;
int factorial=1;
cout<< " Enter n: ";
cin>>n;
for(int i=1;i<=n;i++){
 factorial = factorial * i;
  }

  cout<< factorial <<" "<<endl;
 return 0;
}