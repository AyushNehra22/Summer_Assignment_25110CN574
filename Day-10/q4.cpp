//wap to print character pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space =n-i; 
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        char ch ='A';
        while(j<=i){
            cout<<ch<<" ";
            j=j+1;
            ch=ch+1;
        }
            j=1;
        while(j<i){
            cout<<(char)(ch -j-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}