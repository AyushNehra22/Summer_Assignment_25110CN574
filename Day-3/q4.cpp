//wap to find LCM of two number
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int maxNum = max(a,b);
    while(true){
        if(maxNum%a==0 && maxNum%b==0){
            cout<<maxNum<<endl;
            break;
        }
        maxNum++;
    }
    return 0;
}