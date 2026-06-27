//wap to create salary management system
#include<iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    float basicSalary;
    float hra;   //house rent allowance
    float da;   //dearness allowance
    float grossSalary;
};
int main(){
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n];
  //input employee details
     for(int i=0;i<n;i++){
      cout << "\nEnter Employee Id: ";
        cin >> employees[i].id;
        cin.ignore(); // clear buffer
        cout << "Enter Employee Name: ";
        getline(cin, employees[i].name);
        cout << "Enter Basic Salary: ";
        cin >> employees[i].basicSalary;
  // Simple salary calculation
        employees[i].hra = employees[i].basicSalary * 0.20; // 20% of basic
        employees[i].da  = employees[i].basicSalary * 0.10; // 10% of basic
        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;
    }
    // Display salary details
    cout << "\n--- Salary Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << employees[i].id
             << ", Name: " << employees[i].name
             << ", Basic: " << employees[i].basicSalary
             << ", HRA: " << employees[i].hra
             << ", DA: " << employees[i].da
             << ", Gross Salary: " << employees[i].grossSalary << endl;
    }

    return 0;
}