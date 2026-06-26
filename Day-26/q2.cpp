//wap to create voting eligibility system
#include<iostream>
using namespace std;
void votingEligibility(){
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if(age>=18){
        cout<<"You can vote" << endl;
    }
    else{
        cout<<"You cannot vote" <<endl;
        cout << "You need to wait " << (18 - age) << " more years." << endl;
    }
    }

int main(){
    votingEligibility();
    return 0;
}