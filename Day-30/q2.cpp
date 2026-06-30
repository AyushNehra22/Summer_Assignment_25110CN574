//wap to create mini library system
#include<iostream>
#include<string>
using  namespace std;
int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>> n;

  //Array to store book details
  int bookId[100];
  string title[100];
  string author[100];
  int year[100];

  //Input book records
  for(int i=0;i<n;i++){
    cout<<"\nEnter details of book "<<i+1<<endl;
    cout<<"bookId : ";
    cin>>bookId[i];
    cin.ignore();

    cout<<"Title: ";
    getline(cin, title[i]);
    
    cout<<"Author : ";
    getline(cin,author[i]);

    cout<<"Year of publication : ";
    cin>>year[i];
  }
  //Display all books
  cout << "\n--- Library Records ---\n";
  for(int i=0;i<n;i++){
    cout<<"\nBook" <<i+1 <<endl;
    cout << "Book ID: " << bookId[i] << endl;
    cout << "Title: " << title[i] << endl;
    cout << "Author: " << author[i] << endl;
    cout << "Year: " << year[i] << endl;
    cout << "-------------------------" << endl;
    }
  //search for a book by title
  string searchTitle;
  cin.ignore(); // clear buffer before getline
    cout << "\nEnter book title to search: ";
    getline(cin, searchTitle);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (title[i] == searchTitle) {
            cout << "\nBook Found!\n";
            cout << "Book ID: " << bookId[i] << endl;
            cout << "Title: " << title[i] << endl;
            cout << "Author: " << author[i] << endl;
            cout << "Year: " << year[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No book found with title \"" << searchTitle << "\"" << endl;
    }

    return 0;
}
