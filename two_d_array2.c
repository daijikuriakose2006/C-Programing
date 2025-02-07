/*
auther: Daiji Kuriakose
Date  : 07/02/2025
Program: To input a matrix and print the sum of diagonal elements and print the matrix diagonal elements as 0
*/
#include<stdio.h>
int main(){
 int rows,cols,sum=0;
 printf("Enter the number of rows and col: ");
 scanf("%d%d",&rows,&cols);
 printf("Enter the elements: ");
 int matrix[rows][cols];
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   scanf("%d",&matrix[i][j]);
  }
 }
 printf("elements are: ");
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   printf("%d",matrix[i][j]);
  }
  printf("\n");
 }
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   if(i==j){
    sum+=matrix[i][j];
   }
  }
 }
 printf("The sum of diagonal elements is: %d",sum);
 for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
   if(i==j){
   matrix[i][j]=0;
   }
   printf("%d",matrix[i][j]);
  }
 }
 return 0;
}
