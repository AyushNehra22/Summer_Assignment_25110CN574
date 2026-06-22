//wap to remove spaces from string
#include<iostream>
#include<cstring>
using namespace std;
void removeSpaces(char str[]){
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){   //use != to skip spaces
            str[j]=str[i];   //copy characters
            j++;
        }
    }
        str[j] = '\0';  //terminate the new string
}
int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    removeSpaces(str);

    cout << "String without spaces: " << str << endl;
    return 0;
}