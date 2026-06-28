//wap to create bank account system
#include<iostream>
#include<string>
using namespace  std;
struct Bank{
int id;
string name;
double balance;
};
int main(){
 Bank accounts[100]; //array to store accounts
 int count=0;
 int choice;

 do{
     cout << "\n===== Bank Account System =====\n";
     cout<<"1. Create Account\n";
     cout<<"2. Display all Accounts\n";
     cout<<"3. Deposit money\n";
     cout<<"4. Withdraw money\n";
     cout<<"5. Search account by ID\n";
     cout<<"6. Exit\n";
     cout<<"Enter your choice: ";
     cin>>choice;

     if(choice==1){
    cout<<"enter account ID: ";
    cin>> accounts[count].id;
    cin.ignore();
     cout << "Enter Account Holder Name: ";
     getline(cin, accounts[count].name);
     cout << "Enter Initial Balance: ";
     cin >> accounts[count].balance;
     count++;
     cout << "Account created successfully!\n";
    }
    else if (choice == 2) {
     cout << "\n--- All Accounts ---\n";
     for (int i = 0; i < count; i++) {
         cout << "ID: " << accounts[i].id
              << ", Name: " << accounts[i].name
              << ", Balance: " << accounts[i].balance << endl;
      }
   }
    else if(choice==3){
     int accountId;
     double amount;
     cout << "Enter Account ID: ";
     cin >> accountId;
     cout << "Enter amount to deposit: ";
     cin >> amount;
     bool found = false;
     for (int i = 0; i < count; i++) {
        if (accounts[i].id == accountId) {
           accounts[i].balance += amount;
            cout << "Deposit successful! New Balance: " << accounts[i].balance << endl;
            found = true;
            break;
                }
            }
            if (!found) cout << "Account not found!\n";
        }
    else if (choice == 4) {
       int accountId;
       double amount;
       cout << "Enter Account ID: ";
       cin >> accountId;
       cout << "Enter amount to withdraw: ";
       cin >> amount;
      bool found = false;
         for (int i = 0; i < count; i++) {
             if (accounts[i].id == accountId) {
                  if (amount <= accounts[i].balance) {
                    accounts[i].balance -= amount;
         cout << "Withdrawal successful! New Balance: " << accounts[i].balance << endl;
                } else {
                  cout << "Insufficient balance!\n";
                  }
             found = true;
              break;
            }
         }
        if (!found) cout << "Account not found!\n";
     }
     else if (choice == 5) {
        int accountId;
        cout << "Enter Account ID to search: ";
        cin >> accountId;
        bool found = false;
         for (int i = 0; i < count; i++) {
            if (accounts[i].id == accountId) {
                cout << "Account Found: ID: " << accounts[i].id
                     << ", Name: " << accounts[i].name
                     << ", Balance: " << accounts[i].balance << endl;
                 found = true;
               break;
              }
        }
         if (!found) cout << "Account not found!\n";
        }
    else if (choice == 6) {
            cout << "Exiting program...\n";
        }
    else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
