//wap to find duplicates in array
#include<iostream>
using namespace std;
void Duplicate(int arr[], int size){
    for(int i=0; i<size;i++){
      for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            cout<<arr[i]<<" ";
            break;
        }
      }
    } 
    cout<<endl;
}
int main() {
    int array[6] = {2, 3, 4 , 2, 5,1};
   Duplicate(array, 6);
    return 0;
}
  