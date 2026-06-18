//wap to Binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[] ,int n, int key){
    int start =0;
    int end = n-1;
    int mid = (start +end)/2;
    while(start<=end){
        if(arr[mid]==key){   //return index if found
            return mid;
        }
        else if(arr[mid]>key){   //search left half
            end = mid-1;
        }
        else{
            start =mid+1;    //search right half
        }
    mid = (start +end)/2;
    }
    return -1;  // not found
    }
int main(){
    int arr[8]={12,23,24,33,37,43,54,56};  //sorted array
   int index= binarySearch(arr, 8 ,33);
   if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not present" << endl;

    return 0;
}


