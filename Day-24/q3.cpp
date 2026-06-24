//wap to find longest word
#include<iostream>
using namespace std;
string longestWord(string s){
    string word = "", longest = "";
    int maxLen = 0;
 for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {   // word ends
            if (word.length() > maxLen) {
                maxLen = word.length();
                longest = word;
            }
            word = ""; // reset for next word
        } else {
            word += s[i]; // build current word
        }
    }
    return longest;
}
int main(){
 string sentence;
 cout << "Enter a sentence: ";
 getline(cin, sentence);

 cout << "Longest word: " << longestWord(sentence) << endl;
 return 0;
}