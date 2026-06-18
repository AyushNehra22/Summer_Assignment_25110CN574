//wap to Bubble sort
#include<iostream>
using namespace std;
int bubbleSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){     // outer loop - no of passes
        for(int j=0;j<n-i-1;j++){  //inner loop - adjacent comparison
            if(arr[j]>arr[j+1]){      // if left>right
                swap(arr[j] ,arr[j+1]);   //swap
            }
            }
    }
}
int main(){
    int even[6]={7,3,65,32,12,11};
    bubbleSort(even , 6);
   for(int i=0;i<6;i++){
    cout<< even[i]<< " ";
   }
   cout<<endl;
   return 0;
}