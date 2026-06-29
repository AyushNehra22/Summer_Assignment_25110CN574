//wap to create menu-driven array operations system
#include<iostream>
using namespace std;
int main(){
    int arr[50], n, choice;
   cout<<"Enter the size of array(max 50): ";
   cin>> n;
   cout<<"Enter "<< n <<" elements :" ;
   for(int i=0;i<n;i++){
    cin >>arr[i];
   }
   while(true){
    cout<<"\n======ARRAY MENU======\n";
    cout<<"1. Display elements\n";
    cout<<"2. Sum of elements\n";
    cout<<"3. Search element\n";
    cout<<"4. Reverse array\n";
    cout<<"5. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
          cout<<"Array elements: ";
          for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
          }
            cout<<endl;
            break;
          
        case 2: {
          int sum=0;
          for(int i=0;i<n;i++){
            sum+=arr[i];
          }
          cout<<"sum of elements: " << sum<<endl;
          break;
        } 
        case 3: {
          int key, found=0;
          cout<<"Enter element to search: ";
          cin>>key;
          for(int i=0;i<n;i++){
            if(arr[i]==key){
              cout<<"Element found at position" <<i+1 <<endl;
              found =1;
              break;
            }
        }
        if (!found) cout << "Element not found!" << endl;
                break;
          }    
        case 4:
          cout<<"Reversed array:" ;
          for(int i=n-1;i>=0;i--){
            cout << arr[i] << " ";
          }
                cout << endl;
                break;
          
        case 5:
           cout<<"Exiting program"<<endl;
           return 0;
        default:
           cout<<"Invalid choice. Try again"<<endl; 
    }
   }
}