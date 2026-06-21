//wap to find string length without strlen()
#include<iostream>
using namespace std;
int stringLength(string s){
    int count =0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
      cout << "Length of string: " << stringLength(str) << endl;

    return 0;
}

