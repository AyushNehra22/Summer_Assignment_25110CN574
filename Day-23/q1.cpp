//wap to find first non-repeating character
#include<iostream>
#include<cstring>
using namespace std;
char firstNonRepeatingChar(char str[]){
    int len = strlen(str);
    for(int i=0;i<len;i++){
        bool repeating = false;
          // check if str[i] repeats anywhere else
        for(int j=0;j<len;j++){
            if(i!=j && str[i]==str[j]){
             repeating = true;
             break;
            }
        }
        if (!repeating) {
            return str[i];  // found first non-repeating
        }
    }

    return '\0'; // if none found
}
int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200); // allows spaces

    char result = firstNonRepeatingChar(str);
    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
