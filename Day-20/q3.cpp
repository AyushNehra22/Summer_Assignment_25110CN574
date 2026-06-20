//wap to find row wise sum
#include<iostream>
using namespace std;
void rowwiseSum(int mat[10][10] , int row ,int col){
    for(int i=0;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum = sum + mat[i][j];
            
        }
        cout<<"sum of row " << i+1 << " is: " << sum << endl;
       
    }
    
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
    rowwiseSum(mat ,row ,col);
    return 0;
    }