//wap to reverse a string
#include<iostream>
#include<cstring>      //for strlen
using namespace std;
void reverseString(char str[]){        //function to find reverse
    int start =0;
    int end = strlen(str)-1;
    while(start<end){
        swap(str[start] ,str[end]);
        start++;
        end--;
    }
}
int main(){
      char str[100];
    cout<<"Enter a string: ";
    cin>>str;
     reverseString(str);           //modifies string
    cout << "Reverse of string: " << str << endl;

    return 0;
}