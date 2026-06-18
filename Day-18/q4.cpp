//wap to sort array in descending order
#include<iostream>
#include<algorithm>
using namespace std;
void descendingorderSorting(int arr[] , int n){
    for(int i=0;i<n;i++){
        int maxIndex =i;  //assume current index is maximum

          // find the largest element in the unsorted part
        for(int j=i+1;j<n;j++){
            if(arr[maxIndex]<arr[j]){
                maxIndex =j;
            }
        }
        //swap once per pass
          swap(arr[maxIndex],arr[i]);
    }
}
int main(){
    int even[6]={65,45,3,2,43,5};
    descendingorderSorting(even ,6);
    for(int i=0;i<6;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    return 0;
}
