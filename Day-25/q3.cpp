//Wap to sort names alphabetically
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void sortNames(string names[], int n){
 // Use built-in sort function
    sort(names, names + n);
     cout << "Names in alphabetical order: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

int main() {
    string names[5] = {"Ayush", "Ram", "Shyam", "Ankit", "Manoj"};

    sortNames(names, 5);

    return 0;
}