//wap to Rotate array right
#include<iostream>
using namespace std;
void rotateRight(int arr[] ,int size){
    int last =arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i] =arr[i-1];

    }
    arr[0] = last;
}
int main() {
    int room[5] = {2, 4, 5, 1, 8};

    rotateRight(room, 5);

    cout << "Array after right rotation: ";
    for (int i = 0; i < 5; i++) {
        cout << room[i] << " ";
    }
    cout << endl;
    

    return 0;
}


