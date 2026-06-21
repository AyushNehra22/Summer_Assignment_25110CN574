//wap to count vowels and consonants
#include<iostream>
#include<cstring>
using namespace std;
void countVowelsAndConsonants(char str[]){
        int vowels = 0, consonants = 0;
    for(int i=0;i<strlen(str);i++){
        char ch = str[i];
          // check if alphabet
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if(ch == 'a' ||ch == 'e' ||ch == 'i' || ch =='o' ||ch =='u' ||ch == 'A' || ch =='E' || ch =='I'|| ch =='O' || ch == 'U'){
            vowels++;
         } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // allows spaces

    countVowelsAndConsonants(str);

    return 0;
}