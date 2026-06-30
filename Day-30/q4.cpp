//wap to develop complete mini project using arrays, strings and functions
#include <iostream>
#include <string>
using namespace std;

// Function to add students
void addStudents(string names[], int roll[], int marks[], int &n) {
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> roll[i];
        cin.ignore(); // clear buffer
        cout << "Enter Name: ";
        getline(cin, names[i]);
        cout << "Enter Marks: ";
        cin >> marks[i];
    }
}

// Function to display students
void displayStudents(string names[], int roll[], int marks[], int n) {
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << roll[i]
             << ", Name: " << names[i]
             << ", Marks: " << marks[i] << endl;
    }
}

int main() {
    string names[50];
    int roll[50], marks[50];
    int n = 0;

    addStudents(names, roll, marks, n);
    displayStudents(names, roll, marks, n);

    return 0;
}

