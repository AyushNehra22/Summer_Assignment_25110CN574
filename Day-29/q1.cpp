//wap to create menu-driven calculator
#include<iostream>
using namespace std;
int main(){
    int a,b, choice;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    while(true){
        cout<<"\n======CALCULATOR MENU======\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        switch(choice){
           case 1:
             cout<<"Result: "<< a+b <<endl;
             break;
           case 2:
             cout<<"Result: "<< a-b <<endl;
             break;
           case 3:
             cout<<"Result: "<< a*b <<endl;
             break;
           case 4:
             if(b!=0)
             cout<<"Result: "<< a/b <<endl;
             else
             cout << "Error! Division by zero not possible." << endl;
             break;
           case 5:
             cout<<"Exiting calculator";
             return 0;
           default:
           cout<<"Invalid choice. Please try again."<< endl;
        }
    }
}