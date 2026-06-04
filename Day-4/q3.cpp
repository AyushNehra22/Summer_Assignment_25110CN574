//wap to check Armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int originalNum = n;
    int sum=0;

    int digits=0, temp=n;
    while(temp>0){
        digits++;
        temp=temp/10;
    }  

   temp=n;

  while(temp>0){
    int lastdigit = temp % 10;

    int power = 1;
    for(int i=1; i<=digits; i++){
        power = power * lastdigit;
    }

    sum = sum + power;
    temp=temp/10;
}
if(sum == originalNum)
    cout<<"Armstrong number"<<endl;

else
    cout<<"Not an Armstrong number"<<endl;

 return 0;

}