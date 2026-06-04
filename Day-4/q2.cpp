//wap to find nth fibonacci term.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    else if(n==1){
        cout<<1<<endl;
        return 0;

    }
     else{
        int  a=0, b=1, nextNumber;
        for(int i=2;i<=n;i++){
            nextNumber=a+b;
            a=b;
            b=nextNumber;
        }
                cout<<b<<endl;
                

            }
          return 0;
        }
     

    


