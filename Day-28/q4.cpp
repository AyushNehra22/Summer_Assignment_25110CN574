//wap to create contact management system
#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int mobileNo;
    string name;
};

int main() {
    Contact contacts[100];   // Array to store contacts
    int count = 0;           // Number of contacts
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Mobile No\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Mobile No: ";
            cin >> contacts[count].mobileNo;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, contacts[count].name);
            count++;
            cout << "Contact added successfully!\n";
        }
        else if (choice == 2) {
            cout << "\n--- All Contacts ---\n";
            for (int i = 0; i < count; i++) {
                cout << "Mobile No: " << contacts[i].mobileNo
                     << ", Name: " << contacts[i].name << endl;
            }
        }
        else if (choice == 3) {
            int searchNo;
            cout << "Enter Mobile No to search: ";
            cin >> searchNo;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (contacts[i].mobileNo == searchNo) {
                    cout << "Contact Found: Mobile No: " << contacts[i].mobileNo
                         << ", Name: " << contacts[i].name << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "No contact found with Mobile No " << searchNo << endl;
        }
        else if (choice == 4) {
            int delNo;
            cout << "Enter Mobile No to delete: ";
            cin >> delNo;
            bool deleted = false;
            for (int i = 0; i < count; i++) {
                if (contacts[i].mobileNo == delNo) {
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    cout << "Contact deleted successfully!\n";
                    deleted = true;
                    break;
                }
            }
            if (!deleted) cout << "No contact found with Mobile No " << delNo << endl;
        }
        else if (choice == 5) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
