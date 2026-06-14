//wap to find second largest element
#include<iostream>
using namespace std;
int secondLargest(int arr[],int size){
   int largest =arr[0];
   for(int i=1;i<size;i++){
    if(arr[i]>largest){
        largest =arr[i];
      }
   }

   int second = arr[0];
   for(int i=0;i<size;i++){
     if (arr[i] != largest && arr[i] > second) {
            second = arr[i];
        }
    }

    return second;
}
int main(){
    int number[6]={54,3,2,43,65,23};
    int result = secondLargest(number ,6);
    cout<<" second largest number is: " << result <<endl;
    return 0;
}