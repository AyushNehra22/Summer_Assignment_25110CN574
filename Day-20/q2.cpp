//wap to check symmetric matrix
#include<iostream>
using namespace std;
bool isSymmetric(int mat[10][10] ,int row, int col){
    if(row != col){
        return false;
    }
     // Check symmetry condition
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false; // mismatch found
            }
        }
    }
    return true; // all matched
}
int main(){
    int mat[10][10] , row , col;
    cout<<"Enter row and column of matrix:"<<" ";
    cin>> row>> col;
    cout<<"Enter the elements of matrix:"<<" ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> mat[i][j];
        }
    }
  if(isSymmetric(mat , row ,col)){
    cout<<"The matrix is symmetric";
  }
  else{
    cout<<"the matrix is not symmetric";
  }
  cout<<endl;
  return 0;

}