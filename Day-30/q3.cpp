//wap to create mini employee management system
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    Employee employees[50];    //store upto 50 employees
    int count = 0;          // number of employees added
    int choice;

    do {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Employee ID: ";
            cin >> employees[count].id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, employees[count].name);
            cout << "Enter Department: ";
            getline(cin, employees[count].department);
            cout << "Enter Salary: ";
            cin >> employees[count].salary;
            count++;
            cout << "Employee added successfully!\n";
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No employees to display.\n";
            } else {
                cout << "\n--- Employee List ---\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << " | Name: " << employees[i].name
                         << " | Department: " << employees[i].department
                         << " | Salary: " << employees[i].salary << endl;
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            cout << "Enter ID to search: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (employees[i].id == searchId) {
                    cout << "Employee Found:\n";
                    cout << "ID: " << employees[i].id
                         << " | Name: " << employees[i].name
                         << " | Department: " << employees[i].department
                         << " | Salary: " << employees[i].salary << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee with ID " << searchId << " not found.\n";
            }
        }
    } while (choice != 4);

    cout << "Exiting Employee Management System...\n";
    return 0;
}

