//wap to compress a string
#include<iostream>
using namespace std;
string compressString(string s){
    string result="";
    int n=s.length();
    for(int i=0;i<n;i++){
        char ch=s[i];
        int count =1;
         // Count consecutive same characters
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
     result +=ch;  //add character
    if (count > 1) {
            result += to_string(count);  // add count if > 1
        }
    }

    return result;
}
int main(){
     string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Compressed string: " << compressString(s) << endl;
    return 0;
}