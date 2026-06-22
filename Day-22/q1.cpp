//wap to check palindrome string
#include<iostream>
#include<cstring>
using namespace std;
bool palindromeString(char str[]){
    int start =0 ;
    int end= strlen(str)-1;
    while(start<end){
   if (str[start] != str[end]) {
            return false;  // mismatch found
        }
        start++;
        end--;
    }
    return true;  // all matched
}
int main(){
    char str[100];
    cout<<"Enter the string: " ;
    cin >> str;

    if (palindromeString(str)){
        cout << "String is palindrome"<< endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }
    return 0;
}