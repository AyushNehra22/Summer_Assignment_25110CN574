//wap to find pair with given sum
#include<iostream>
using namespace std;
int pairSum(int arr[] ,int size, int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] + arr[j] == sum){
                cout<<"Pair found: (" << arr[i] << "," <<arr[j]<<")";
            }

        }
    }
}
int main(){
    int array[5]={1,2,3,4,5};
    pairSum(array , 5, 6);
    return 0;
}