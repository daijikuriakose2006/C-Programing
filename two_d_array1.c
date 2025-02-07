/*
auther: Daiji Kuriakose
Date  : 07/02/2025
Program: To input two matrix from the user and print sum of two matrix
*/
#include<stdio.h>
int main(){
 int rows,cols;
 printf("Enter the number of rows and col for matrix: ");
 scanf("%d%d",&rows,&cols);
 printf("Enter the elements: ");
 int matrix1[rows][cols];
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   scanf("%d",&matrix1[i][j]);
  }
 }
 printf("Enter the elements for second matrix: ");
 int matrix2[rows][cols];
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   scanf("%d",&matrix2[i][j]);
  }
 }
 int matrix3[rows][cols];
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
  }
 }
 printf("The sum of two matrix is: ");
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   printf("\t%d",matrix3[i][j]);
  }
  printf("\n");
 }
 return 0;
}
