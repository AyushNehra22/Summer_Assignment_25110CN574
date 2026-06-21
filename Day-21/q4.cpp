//wap to convert lowercase to uppercase
#include<iostream>
#include<cstring>
using namespace std;
void LowercaseToUppercase(char str[]){
     for(int i=0;i<strlen(str);i++){
        char ch = str[i];
      if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - 'a' + 'A';  // convert to uppercase
        }
    }
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // allows spaces

    LowercaseToUppercase(str);
    cout << "Uppercase string: " << str << endl;

    return 0;
}