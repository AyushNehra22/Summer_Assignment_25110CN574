//wap to selection sort
#include<iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        int minIndex =i;    //assume current index is minimum

          // find the smallest element in the unsorted part
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex =j;
            }
        }

         swap(arr[minIndex],arr[i]);
    }        
}
int main(){
   int even[6]={45,23,54,22,11,67};
    selectionSort(even ,6);
    for(int i=0;i<6;i++){
      cout <<even[i]<<" ";
    }

cout<<endl;
return 0;


}