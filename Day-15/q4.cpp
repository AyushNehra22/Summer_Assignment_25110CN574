
//wap to move zeroes to end
#include<iostream>
using namespace std;
void moveZeroes( int arr[] , int size){
    int nonZero=0;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[j] ,arr[nonZero]);
            nonZero++;
        }
    }

}
int main(){
    int array[5]={0,1,0,3,12};
    moveZeroes(array ,5);
    cout<<"after moving zeroes to end:";
    for(int i=0;i<5;i++){
        cout<< array[i]<< " ";

    }
    return 0;

}

