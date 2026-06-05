//wap to find largest prime factor
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}   
int main(){
    int n;
    cin>>n;
    int largestPrimeFactor=-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                largestPrimeFactor=i;
            }
            if(isPrime(n/i)){
                largestPrimeFactor=n/i;
            }
        }
    }
    if(largestPrimeFactor==-1){
        cout<<"No prime factor found";
    }
    else{
        cout<<"Largest prime factor is: "<<largestPrimeFactor;
    }
    return 0;
}