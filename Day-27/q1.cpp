//wap to create student record management system
#include<iostream>
#include<string>
using namespace std;
struct Student{
    int rollNo;
    string name;
    float marks;
};
 int main(){
    Student students[100];
    int count=0;
    int choice;
    do{
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

     if(choice==1){
        cout<<"Enter roll no: ";
        cin>>students[count].rollNo;
        cout<<"Enter Name: ";
         cin.ignore(); // clear buffer
            getline(cin, students[count].name);
            cout << "Enter Marks: ";
            cin >> students[count].marks;
            count++;
            cout << "Record added successfully!\n";
        }
           else if (choice == 2) {
            cout << "\n--- All Student Records ---\n";
            for (int i = 0; i < count; i++) {
                cout << "Roll No: " << students[i].rollNo
                     << ", Name: " << students[i].name
                     << ", Marks: " << students[i].marks << endl;
            }
        }
           else if (choice == 3) {
            int roll;
            cout << "Enter Roll Number to search: ";
            cin >> roll;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == roll) {
                    cout << "Record Found: Roll No: " << students[i].rollNo
                         << ", Name: " << students[i].name
                         << ", Marks: " << students[i].marks << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No record found for Roll No " << roll << endl;
            }
        }
      else if (choice == 4) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}