//wap to sort words by length
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void sortLength(string names[] ,int n){
// sort fxn comparing by length
    sort(names, names + n, [](string a, string b) {
    return a.length() < b.length();
});
 cout << "Words sorted by length: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

int main() {
    string words[5] = {"Ayush", "Ram", "Shivam", "Aman", "Manjeet"};

    sortLength(words, 5);

    return 0;
}
