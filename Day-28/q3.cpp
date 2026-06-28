//wap to create ticket booking system
#include<iostream>
using namespace std;
struct Ticket{
    int id;
    string passengerName;
    string destination;
    double price;
};
int main(){
    Ticket bookings[100];
    int count=0;
    int choice;

  do{
     cout << "\n===== Ticket Booking System =====\n";
     cout << "1. Book Ticket\n";
     cout << "2. Display All Tickets\n";
     cout << "3. Search Ticket by ID\n";
     cout << "4. Cancel Ticket\n";
     cout << "5. Exit\n";
     cout << "Enter your choice: ";
     cin >> choice;

    
        if (choice == 1) {
            cout << "Enter Ticket ID: ";
            cin >> bookings[count].id;
            cin.ignore();
            cout << "Enter Passenger Name: ";
            getline(cin, bookings[count].passengerName);
            cout << "Enter Destination: ";
            getline(cin, bookings[count].destination);
            cout << "Enter Price: ";
            cin >> bookings[count].price;
            count++;
            cout << "Ticket booked successfully!\n";
        }
        else if (choice == 2) {
            cout << "\n--- All Tickets ---\n";
            for (int i = 0; i < count; i++) {
                cout << "ID: " << bookings[i].id
                     << ", Passenger: " << bookings[i].passengerName
                     << ", Destination: " << bookings[i].destination
                     << ", Price: " << bookings[i].price << endl;
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter Ticket ID to search: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (bookings[i].id == searchId) {
                    cout << "Ticket Found: ID: " << bookings[i].id
                         << ", Passenger: " << bookings[i].passengerName
                         << ", Destination: " << bookings[i].destination
                         << ", Price: " << bookings[i].price << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "No ticket found with ID " << searchId << endl;
        }
        else if (choice == 4) {
            int cancelId;
            cout << "Enter Ticket ID to cancel: ";
            cin >> cancelId;
            bool cancelled = false;
            for (int i = 0; i < count; i++) {
                if (bookings[i].id == cancelId) {
                    for (int j = i; j < count - 1; j++) {
                        bookings[j] = bookings[j + 1];
                    }
                    count--;
                    cout << "Ticket cancelled successfully!\n";
                    cancelled = true;
                    break;
                }
            }
            if (!cancelled) cout << "No ticket found with ID " << cancelId << endl;
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
