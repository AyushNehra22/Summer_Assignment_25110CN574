//wap to write function to find maximum
#include<iostream>
using namespace std;
int Max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x,y;
    cin>>x>>y;

   int max = Max(x,y);
    cout<<"Maximum is "<<max<<endl;
     return 0;  
}