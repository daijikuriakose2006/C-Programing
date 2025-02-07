/*
auther: Daiji Kuriakose
Date  : 07/02/2025
Program: To input a matrix from the user and print transpose of the matrix
*/
#include<stdio.h>
int main(){
 int row,col;
 printf("Enter the number of row and col: ");
 scanf("%d%d",&row,&col);
 int matrix[row][col];
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&matrix[i][j]);
  }
 }
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   printf("%d",matrix[i][j]);
  }
  printf("\n");
 }
 for(int i=0;i<col;i++){
  for(int j=0;j<row;j++){
   printf("\t%d",matrix[j][i]);
  }
  printf("\n");
 }
 return 0;
}
