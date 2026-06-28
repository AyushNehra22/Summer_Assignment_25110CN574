//wap to create library management system
#include<iostream>
#include<string>
using namespace std;
struct Book{
int id;
string title;
string author;
};
int main(){
    Book library[100];
    int count=0;
    int choice;

do{
    cout<<"\n-----Library Management System-----\n";
    cout<<"1. Add Book\n";
    cout<<"2. Display all books\n";
    cout<<"3. Search Book by ID\n";
    cout<<"4. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

  if(choice==1){
    cout<<"Enter Book ID: ";
    cin>> library[count].id;
     cin.ignore(); // clear buffer
     cout << "Enter Book Title: ";
     getline(cin, library[count].title);
     cout<<"Enter author name: ";
    getline(cin, library[count].author);
     count++;
    cout << "Book added successfully!\n";
    }

  else if(choice==2){
    cout<<"\n-----All Books in Library-----\n";
    for(int i=0;i<count;i++){
        cout<<"ID: "<<library[i].id;
        cout<<", Title: "<<library[i].title;
        cout<<", Author: "<<library[i].author<<endl;
    }
}
  else if(choice==3){
    int searchId;
    cout<<"Enter book ID to search: ";
    cin>>searchId;
    bool found =false;
    for(int i=0;i<count;i++){
        if(library[i].id==searchId){
    cout << "Book Found: ID: " << library[i].id
        << ", Title: " << library[i].title
         << ", Author: " << library[i].author << endl;
    found = true;
      break;
         }
     }
    if (!found) {
     cout << "No book found with ID " << searchId << endl;
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
