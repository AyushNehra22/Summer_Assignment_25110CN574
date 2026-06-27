//wap to create employee management system
#include <iostream>
#include <string>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};
int main(){
    int n;
    cout<<"Enter number of employee: ";
    cin>>n;

     Employee employees[n];

    // Input employee details
    for(int i=0;i<n;i++){
        cout<<"\nEnter Employee Id: ";
        cin>>employees[i].id;
        cout << "Enter Employee Name: ";
        cin.ignore(); // clear buffer
        getline(cin, employees[i].name);
        cout << "Enter Salary: ";
        cin >> employees[i].salary;
    }
    // Display employee details
    cout << "\n--- Employee Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << employees[i].id
             << ", Name: " << employees[i].name
             << ", Salary: " << employees[i].salary << endl;
    }
    return 0;
}