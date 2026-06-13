//wap to input and display array
#include<iostream>
using namespace std;   
int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter"<<" "<< n <<" "<<"elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

    }
    return 0;
}
    
 





