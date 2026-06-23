//wap to check anagram strings
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool anagramStrings(char str1[] ,char str2[]){
   if(strlen(str1)!=strlen(str2)){
    return false;
   }
    // Convert char arrays to std::string for sorting
    string s1(str1);
    string s2(str2);

    sort(s1.begin(), s1.end());   // sort both strings
    sort(s2.begin(), s2.end());

    return (s1 == s2);            //  compare sorted versions
}

int main() {
    char str1[200], str2[200];
    cout << "Enter first string: ";
    cin.getline(str1, 200);
    cout << "Enter second string: ";
    cin.getline(str2, 200);

    if (anagramStrings(str1, str2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}