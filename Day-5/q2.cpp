#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
         fact =fact*i;
         
    }
    return fact;
    
}
 int main(){
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    while(n>0){
        int digit = n%10;
        sum+=factorial(digit);
        n=n/10;

    }
    if(sum==temp){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a Strong Number";
    }
    return 0;
 }