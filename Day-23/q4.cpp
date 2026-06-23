//wap to find maximum occuring character
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
char maxOccuringCharacter(char str[]){
    int len =strlen(str);
    int count =0;
    int maxFreq =INT_MIN;   //track max frequency
     char maxChar = '\0';  //track character with maximum frequency

    for(int i=0;i<len;i++){
        int count =1;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
            }
               // update max if this character’s frequency is higher
        if (count > maxFreq) {
            maxFreq = count;
            maxChar = str[i];
        }
    }

    return maxChar; // return the character, not the count
}
int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    char result = maxOccuringCharacter(str);
    cout << "Maximum occurring character: " << result << endl;

    return 0;
}