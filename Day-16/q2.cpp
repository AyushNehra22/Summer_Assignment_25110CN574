//wap to find maximum frequency element
#include<iostream>
using namespace std;
int maxFrequency(int arr[], int size){
    int maxFreq =0;
    int element =arr[0];
    // check each element
    for(int i=0;i<size;i++){
        int count =0;
     // check number of times arr[i] appears
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }

        // Update if this element has higher frequency
        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
    }
}
 return element;
}
int main(){
    int element[8]={2,4,7,1,4,1,4,3};
    int index =maxFrequency(element , 8);
    cout<<"maximum frequency element is:" << index << endl;
    return 0;
}