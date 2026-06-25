//wap to find common characters in strings
#include<iostream>
#include<cstring>
using namespace std;
void commonChars(string s1,string s2){
    cout<<"Common characters : ";
    for(int i=0;i<s1.length();i++){
     // skip if this character was already printed before
     bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (s1[i] == s1[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) continue;
        
        for(int j=0;j<s2.length();j++){
            if(s1[i] == s2[j]){
                cout<< s1[i] <<" ";
                   break;
            }
        }
    }
    cout<<endl;
}
int main(){
string str1 = "hello";
string str2 = "world";

commonChars(str1, str2);

    return 0;
}
 