//wap to find diagonal sum
#include<iostream>
using namespace std;
void diagonalSum(int mat[10][10],int row,int col){
    int primarySum =0 , secondarySum =0;;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                primarySum += mat[i][j];
            }
             if (i + j == row - 1) {
             secondarySum += mat[i][j]; // secondary diagonal
            }
        }
    }

    cout << "Primary diagonal sum = " << primarySum << endl;
    cout << "Secondary diagonal sum = " << secondarySum << endl;
}


    int main() {
    int mat[10][10], row, col;
    cout << "Enter the row and column of the matrix: ";
    cin >> row >> col;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
    diagonalSum(mat, row, col);
    return 0;
}
 