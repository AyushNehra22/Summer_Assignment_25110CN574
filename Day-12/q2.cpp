//wap to write function for armstrong 
#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n){
    int original =n;
    int sum =0;
    int digits =0;
    int temp = n;
    while(temp>0){
        digits++;
        temp = temp/10;
    }
    while(n>0){
        int digit = n%10;
        sum = sum +pow(digit,digits);
        n = n/10;
    }
    return original == sum;
}
int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)){
        cout<<n<<" is an armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number"<<endl;
    }
    return 0;
}