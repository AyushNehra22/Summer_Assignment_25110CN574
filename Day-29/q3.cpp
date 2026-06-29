//wap to create menu-driven string operations system
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    while(true){
         cout << "\n====== STRING MENU ======\n";
        cout << "1. Display string\n";
        cout << "2. Length of string\n";
        cout << "3. Reverse string\n";
        cout << "4. Convert to uppercase\n";
        cout << "5. Convert to lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

      switch(choice){
        case 1:
          cout<<"String: "<<str<<endl;
          break;
        case 2:
          cout << "Length of string = " << str.length() << endl;
          break;
        case 3: {
          string rev = str;
          reverse(rev.begin(), rev.end());
          cout << "Reversed string: " << rev << endl;
          break;
        }
        case 4:{
          string upper = str;
          for (char &c : upper) c = toupper(c);
          cout << "Uppercase string: " << upper << endl;
           break;
        }
        case 5: {
          string lower = str;
          for (char &c : lower) c = tolower(c);
          cout << "Lowercase string: " << lower << endl;
          break;
            }

        case 6:
          cout << "Exiting program. Goodbye!" << endl;
          return 0;

        default:
          cout << "Invalid choice. Try again." << endl;
        }
    }
}

