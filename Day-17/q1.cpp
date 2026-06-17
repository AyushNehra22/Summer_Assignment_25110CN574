//wap to merge arrays
#include<iostream>
#include<algorithm>
using namespace std;
void mergeArrays(int arr1[], int m , int arr2[] , int n , int merged[]){
     // Copy arr1 into merged
    for(int i=0;i<m;i++){  
        merged[i] =arr1[i];
    }
     // Copy arr2 into merged(after arr1)
    for(int i=0;i<n;i++){
        merged[m+i] = arr2[i];

    }
    // Sort the merged array
    sort(merged , merged + m +n);
}
int main(){
    int arr1[5]={4,11,2,6,5};
    int arr2[3]={3,7,1};
    int merged[8];
    mergeArrays(arr1 , 5,arr2, 3 , merged);
    cout << "Sorted Merged Array: ";
    for (int i = 0; i < 8; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
