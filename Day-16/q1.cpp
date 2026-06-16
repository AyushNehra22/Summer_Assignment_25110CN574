//wap to find missing number in array.

#include<iostream>
using namespace std;
int missingNumber(int arr[] , int size){
    int total =(size) * (size+1) /2;
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }
        
 return total - sum; 
}
int main(){
    int array[]={9,6,4,2,3,5,7,0,1};
    int size =sizeof(array)/sizeof(array[0]);
   int index =  missingNumber(array, size);
   cout<<"Missing number is:"<< index <<endl;

   return 0;


}
        

