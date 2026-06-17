//wap to find common elements
#include<iostream>
using namespace std;
void commonElements(int arr1[] , int m , int arr2[] , int n){
    cout<< "Common elements are:";
    for(int i=0 ; i<m;i++){    //loop through arr1
        for(int j=0;j<n;j++){     //compare with arr2
            if(arr1[i] == arr2[j]){     //if equal -- common
                cout << arr1[i]  << " ";  // print common element
                break;             //stop checking once found

            }
        }
    }
    cout << endl;
}
int main(){
    int arr1[]={2,30,14,5,13,1};
    int arr2[]= {54,30,14,5,93};
    commonElements(arr1, 6 ,arr2 ,5);
    return 0;



}