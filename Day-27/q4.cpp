//wap to create marksheet generation system
#include <iostream>
#include <string>
using namespace std;

struct Marksheet {
    int rollNo;
    string name;
    int studentClass;
    int marks[3];  // for 3 subjects
    int total;
    float percentage;
    char grade;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Marksheet students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> students[i].rollNo;
        cin.ignore(); // clear buffer
        cout << "Enter Name: ";
        getline(cin, students[i].name);
        cout << "Enter Class: ";
        cin >> students[i].studentClass;

        students[i].total = 0;
        cout << "Enter marks for 3 subjects: \n";
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j+1 << ": ";
            cin >> students[i].marks[j];
            students[i].total += students[i].marks[j];
        }

        students[i].percentage = students[i].total / 3.0;

        // Assign grade based on percentage
        if (students[i].percentage >= 75)
            students[i].grade = 'A';
        else if (students[i].percentage >= 60)
            students[i].grade = 'B';
        else if (students[i].percentage >= 45)
            students[i].grade = 'C';
        else
            students[i].grade = 'F';
    }

    cout << "\n--- Marksheet ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << students[i].rollNo
             << ", Name: " << students[i].name
             << ", Class: " << students[i].studentClass
             << ", Total: " << students[i].total
             << ", Percentage: " << students[i].percentage << "%"
             << ", Grade: " << students[i].grade << endl;
    }

    return 0;
}
