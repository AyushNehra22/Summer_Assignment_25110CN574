//wap to find sum and average of array
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int sum =0;
cout<<"Enter" << n <<"elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum = sum + arr[i];
        
    }
    double average =(double)sum/n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"sum is:"<<sum<<endl;
    cout<<"average is:"<<average<<endl;

return 0;
}