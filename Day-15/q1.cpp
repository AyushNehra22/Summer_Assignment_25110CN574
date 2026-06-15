//wap to reverse array
#include<iostream>
using namespace std;
void reverse(int arr[] , int size){
     int start = 0;
     int end = size-1;
    while(start<end){
    swap(arr[start], arr[end]);
    start ++;
    end--;

    }
}
int main(){
    int room[5]={2,4,5,1,8};
    reverse(room ,5);
    cout<<"reverse is: ";
    for(int i=0;i<5;i++){
    cout<< room[i] <<" ";
   
    }
    return 0;
}
