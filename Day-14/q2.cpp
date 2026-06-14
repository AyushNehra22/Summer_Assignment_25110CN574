//wap to  find frequency of an element
#include<iostream>
using namespace std;
int frequency(int arr[], int size , int key){
    int count =0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            count++;
       
        
        }
    }
    return count;
}
int main(){
    int array[6]={2,3,4,2,2,1};
    int key = 2;
   int freq=  frequency(array, 6 ,2);
  cout<<"frequency of "<< key <<" is: "<< freq <<endl;
    return 0;

}