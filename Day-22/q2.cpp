//wap to count words in a sentence
#include<iostream>
#include<cstring>
using namespace std;
int countWords(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
    }
    return count + 1; // words = spaces + 1
}
int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200); // allows spaces

    cout << "Number of words: " << countWords(str) << endl;
    return 0;
}