//wap to multiply matrices
#include<iostream>
using namespace std;
void multiplyMatrices(int mat1[10][10] ,int mat2[10][10] ,int mat3[10][10] , int row1 , int col1 , int row2, int col2){
    int sum =0;
   
    
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                sum = sum + mat1[i][k] *mat2[k][j];
            }
        mat3[i][j] =sum;
        sum =0;

        }
    }
     cout<<"resultant matrix:\n";
     for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
     }
}
int main(){
     int mat1[10][10], mat2[10][10], mat3[10][10];
      int row1, col1, row2, col2;

     cout<<"Enter the row and column of first matrix: " ;
    cin>> row1 >> col1;
    cout<<"Enter the row and column of second matrix: " ;
    cin>> row2 >> col2;
    if(col1!=row2){
        cout<<"Multiplication is not possible" ;
    }
    else{
        cout<<"Enter the elements of first matrix:"<<" ";
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                cin>> mat1[i][j];
            }
        }
         cout<<"Enter the elements of second matrix:"<<" ";
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cin>> mat2[i][j];
            }
    }
    multiplyMatrices(mat1 , mat2 , mat3, row1, col1, row2, col2);
    return 0;
}
}