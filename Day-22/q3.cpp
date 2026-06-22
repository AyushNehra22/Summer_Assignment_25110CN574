//wap to Character frequency
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
 cout<<"Enter a string:";
 getline(cin,str);

 int freq[26] = {0}; // only for lowercase a-z

// count frequency
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    // print result
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}