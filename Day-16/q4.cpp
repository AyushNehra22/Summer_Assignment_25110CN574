//wap to remove duplicates froom array
#include<iostream>
using namespace std;
 void duplicates(int arr[] , int size){
    for(int i=0;i<size;i++){
        bool seen = false;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                seen =true;
                break;
            }
    
        }
             if(!seen){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int array[] = {2, 4, 7, 1, 4, 1, 4, 3};
    duplicates(array, 8);
    return 0;
}
