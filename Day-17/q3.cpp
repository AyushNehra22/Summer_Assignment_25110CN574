//wap to intersection of arrays
#include<iostream>
using namespace std;
void intersectionArrays(int arr1[] ,int m, int arr2[] ,int n){
    cout<<"Intersection of arrays:";
    for(int i=0;i<m;i++){          //loop through arr1
        for(int j=0;j<n;j++){     //compare with arr2
            if(arr1[i] == arr2[j]){ //if equal -- common
                cout << arr1[i] << " ";  //print common element
                break;            //stop checking once found

            }

        }
    }
    cout << endl;
}
int main(){
    int arr1[]={2,3,4,5,6};
    int arr2[]={3,4,5,7};
    intersectionArrays(arr1 , 5, arr2 ,4);
    return 0;

}