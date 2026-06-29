// WAP to create Inventory Management System
#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Item inventory[50];
    int n = 0;   // number of items stored
    int choice;

    while (true) {
        cout << "\n====== INVENTORY MENU ======\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Update Item Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (n < 50) {
                    cout << "Enter Item ID: ";
                    cin >> inventory[n].id;
                    cout << "Enter Item Name: ";
                    cin.ignore(); // clear newline
                    getline(cin, inventory[n].name);
                    cout << "Enter Quantity: ";
                    cin >> inventory[n].quantity;
                    cout << "Enter Price: ";
                    cin >> inventory[n].price;
                    n++;
                    cout << "Item added successfully!\n";
                } else {
                    cout << "Inventory full!\n";
                }
                break;
            }

            case 2:
                if (n == 0) {
                    cout << "No items in inventory.\n";
                } else {
                    cout << "\nID\tName\tQuantity\tPrice\n";
                    for (int i = 0; i < n; i++) {
                        cout << inventory[i].id << "\t"
                             << inventory[i].name << "\t"
                             << inventory[i].quantity << "\t\t"
                             << inventory[i].price << endl;
                    }
                }
                break;

            case 3: {
                int searchId, found = 0;
                cout << "Enter Item ID to search: ";
                cin >> searchId;
                for (int i = 0; i < n; i++) {
                    if (inventory[i].id == searchId) {
                        cout << "Item found: "
                             << inventory[i].name << ", Quantity: "
                             << inventory[i].quantity << ", Price: "
                             << inventory[i].price << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Item not found!\n";
                break;
            }

            case 4: {
                int updateId, newQty, found = 0;
                cout << "Enter Item ID to update: ";
                cin >> updateId;
                for (int i = 0; i < n; i++) {
                    if (inventory[i].id == updateId) {
                        cout << "Enter new quantity: ";
                        cin >> newQty;
                        inventory[i].quantity = newQty;
                        cout << "Quantity updated successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if (!found) cout << "Item not found!\n";
                break;
            }

            case 5:
                cout << "Exiting Inventory Management System. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
