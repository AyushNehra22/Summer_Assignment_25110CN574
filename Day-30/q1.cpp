//wap to create student record system using arrays and strings
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

  //Array to store student details
  int rollNo[100];
  string name[100];
  string course[100];
  int age[100];

  //Input student records
  for(int i=0;i<n;i++){
    cout<<"Enter details of student "<< i+1<<endl;
    cout<<"Roll No: ";
    cin>>rollNo[i];
    cin.ignore();
    cout << "Name: ";
    getline(cin, name[i]);

    cout << "Course: ";
    getline(cin, course[i]);

    cout << "Age: ";
    cin >> age[i];
    }
    //Display student records
     cout << "\n--- Student Records ---\n";
     for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << rollNo[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Course: " << course[i] << endl;
        cout << "Age: " << age[i] << endl;
    }

    return 0;
}

