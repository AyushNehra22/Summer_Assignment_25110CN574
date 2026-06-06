//wap to find x^n without pow()
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*x;
    }
    cout<<"answer is "<<ans<<endl;
}
