//wap to Rotate array left
#include<iostream>
using namespace std;
void rotateLeft(int arr[] , int size){
        int first =arr[0];

    for(int i=0;i<size-1;i++){
    arr[i] =arr[i+1];
    }
    arr[size-1] = first;
}
int main(){
    int room[5]={2,3,4,5,6};
    rotateLeft(room ,5);
    cout<<"Array after left rotation:";
    for(int i=0;i<5;i++){
        cout<< room[i]<<" ";
    }
return 0;

}