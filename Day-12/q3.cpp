//wap to write function for Fibonacci.
#include<iostream>
using namespace std;
int fibonacci(int n){
if (n==0){
    return 0;
}
if(n==1){
    return 1;
}

int a=0 ,b=1 , nextTerm;
for(int i=2;i<=n;i++){
    nextTerm = a+b;
    a=b;
    b=nextTerm;
}
return b;
}
int main(){
    int n;
    cin>>n;

    cout<<"Fibonacci term is"<<fibonacci(n)<<endl;
    return 0;
}