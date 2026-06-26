//wap to create ATM simulation
#include<iostream>
using namespace std;
void atmSimulation(){
    int balance = 6000;
    int choice , amount;
    while(true){
     cout << "\n===== ATM Menu =====\n";
     cout << "1. Check Balance\n";
     cout << "2. Deposit Money\n";
     cout << "3. Withdraw Money\n";
     cout << "4. Exit\n";
     cout << "Enter your choice: ";
      cin >> choice;
    
    switch(choice){
        case 1 :
         cout<<"Your current balance is: "<< balance<<endl;
         break;

        case 2 :
         cout << "Enter amount to deposit: ";
            cin >> amount;
             balance += amount;
             cout << "Deposit successful! New balance: " << balance << endl;
             break;

        case 3:
         cout << "Enter amount to withdraw: ";
             cin >> amount;
             if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful! New balance: " << balance << endl;
             } else {
                    cout << "Insufficient balance!" << endl;
                }
             break;
        
        case 4:
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            return; // exit the function

            default:
             cout << "Invalid choice. Please try again." << endl;
        }
    }
}

int main() {
    atmSimulation();
    return 0;
}

