//wap to write function for perfect number
#include<iostream>
using namespace std;
int perfectNumber(int n){
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum +i;
        }
    }
    if(sum == n){
        cout<<"perfect number"<<endl;
    }
    else{
        cout<<"not a perfect number"<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    perfectNumber(n);
    return 0;
}