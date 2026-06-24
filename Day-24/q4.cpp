//wap to remove duplicate characters
#include<iostream>
using namespace std;
string removeDuplicate(string s){
  string result="";
  for(int i=0;i<s.length();i++){
    bool found =false;
 // check if s[i] already exists in result
     for (int j = 0; j < result.length(); j++) {
         if (s[i] == result[j]) {
         found = true;
           break;
            }
        }
        if (!found) {
            result += s[i]; // add only if not duplicate
        }
    }
    return result;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing duplicates: " 
         << removeDuplicate(str) << endl;
    return 0;
}