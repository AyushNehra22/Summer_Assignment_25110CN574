//wap to write function to find factorial

#include<iostream>
using namespace std;

long long factorial(int n){
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

    int main(){
     int num;
     cin>>num;
     cout<<"factorial is :"<<factorial(num)<<endl;
     
     return 0;
    
    
}