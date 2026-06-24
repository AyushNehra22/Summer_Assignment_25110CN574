//Wap to check string rotation
#include<iostream>
#include<math.h>
using namespace std;
bool isStringRotation(string s1 ,string s2){
    if(s1.length() != s2.length())
        return false;
        string temp =s1 +s1;      // concatenate
    return temp.find(s2) != string::npos;  //check substring
}
int main(){
    string s1, s2;
    cout<<"Enter elements of string 1:"<<" ";
    cin>>s1;
    cout<<"Enter elements of string 2:"<<" ";
    cin>>s2;

    if (isStringRotation(s1, s2))
        cout << s2 << " is a rotation of " << s1 << endl;
    else
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    return 0;
}