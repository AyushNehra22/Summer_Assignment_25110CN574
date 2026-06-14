//Wap to linear search
#include<iostream>
using namespace std;
int linearSearch(int arr[], int size ,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
          cout<<"element is present"<<endl;
          return i;
        }
    }
     cout<<"element not present"<<endl;
     return -1;
        }
    
    
 int main(){
    int even[6]={20,6,4,15,43,7};
     linearSearch(even , 6, 12);
     return 0;
 }
    
