//wap to subtract matrices
#include<iostream>
using namespace std;
void subtractMatrices(int mat1[10][10] ,int mat2[10][10], int row ,int col){
    int subtract[10][10];
    //subtracting element by element
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            subtract[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    //displaying result
    cout<<"Difference of matrices: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
    cout<< subtract[i][j] <<" ";

        }
    cout<<endl;
    }
}
int main(){
    int mat1[10][10] , mat2[10][10] , row ,col;
    cout<<"Enter the number of rows and column: ";
    cin>>row >>col;
        
cout<<"Element in the first matrix: ";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>> mat1[i][j];
    }
  }
cout<<"Elements in the second matrix: ";
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       cin>>mat2[i][j];
   }
}
subtractMatrices(mat1 ,mat2, row, col);
return 0;
}