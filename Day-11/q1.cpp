//wap to write function to find sum of two numbers
#include<iostream>
using namespace std;

int Sum(int a,  int b){
   int sum = a+b;
    cout<<sum<<endl;
    return sum;
}
int main(){
    int x,y;
    cin>>x>>y;
     Sum(x,y);
    
    return 0;
}