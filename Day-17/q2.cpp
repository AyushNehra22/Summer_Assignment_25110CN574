//wap to union of arrays
#include<iostream>
#include<set>
using namespace std;
void unionArrays(int arr1[] , int m, int arr2[] , int n){
    set<int>s;

//insert arr1
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    //insert arr2
    for(int j=0;j<n;j++){
        s.insert(arr2[j]);
    }
  // print union
    cout<<"Union of arrays:";
    for(auto x : s){
    cout<< x << " ";
    }
}
int main(){
    int arr1[]={2,4,7,1,5,8};
    int arr2[]={9,11,7,4,1,5,8};
    unionArrays(arr1, 6, arr2, 7);
    return 0;
}
