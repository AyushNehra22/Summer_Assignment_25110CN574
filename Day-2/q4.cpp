//wap to check whether a number is palindrome

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  int reverse=0;
  int original = n;
    while(n>0){
        int digit = n%10;
       reverse= reverse * 10 + digit;
        n=n/10;
    }
    if(reverse==original){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}

