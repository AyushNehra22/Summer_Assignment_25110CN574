//wap to find first repeating character
#include<iostream>
#include<cstring>
using namespace std;
char firstRepeatingChar(char str[]){
    int len = strlen(str);
    for(int i=0;i<len;i++){
        bool repeating = false;
          // check if str[i] repeats anywhere else
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
             return str[i];
            }
        }
    }
    return '\0'; // if none found
}
int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200); // allows spaces

    char result = firstRepeatingChar(str);
    if (result != '\0')
        cout << "First repeating character: " << result << endl;
    else
        cout << "No repeating character found." << endl;

    return 0;
}
