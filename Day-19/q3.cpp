//wap to transpose matrix
#include<iostream>
using namespace std;
void transpose(int mat[10][10], int row , int col){
     cout<<"transpose matrix is: "<<endl;
     for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<mat[j][i]<<" ";
        }
     
     cout<< endl;
    }
} 
int main(){
    int mat[10][10] , row , col;
    cout<<"Enter the row and column of the matrix:"<< " ";
    cin>> row >>col;

    cout<<"Enter the elements of matrix :" <<  " ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> mat[i][j];
        }
    }
   transpose(mat , row ,col);
    return 0;
}