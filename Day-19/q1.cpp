//wap to add matrices
#include<iostream>
using namespace std;
void addMatrices(int mat1[10][10] , int mat2[10][10], int row ,int col){
  int sum[10][10];
  //adding element by element
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum[i][j]=mat1[i][j] + mat2[i][j];
    }
  }
  //displaying result
  cout<<"Sum of matrices:"<<endl;;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<sum[i][j]<< " ";
    }
  cout<<endl;
}
}
int main(){
    int mat1[10][10] , mat2[10][10] , row, col;
    cout<<"Enter the number of rows and column: ";
    cin>> row >> col;
    
 cout<<"Enter elements of first matrix: ";
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>mat1[i][j];
    }
 }
  cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat2[i][j];
        }
    }
    
 addMatrices(mat1 , mat2 ,row,col);
 return 0;
}