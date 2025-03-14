/*
author: Daiji Kuriakose
Date  : 05/02/2025
Program: To sort the numbers.
*/
#include<stdio.h>
int main(){
 int limit,i,n,temp,j;
 printf("Enter the limit");
 scanf("%d",&limit);
 int number[limit];
 for(i=0;i<limit;i++){
  scanf("%d",&number[i]);
 }
 for(i=0;i<limit-1;i++){
  for(j=0;j<limit-i;j++){
   if (number[j]>number[j+1]){
    temp=number[j];
    number[j]=number[j+1];
    number[j+1]=temp;
   }
  }
 }
 printf("\n the sorted array: ");
 for(i=0;i<limit;i++){
  printf("%d\t",number[i]);
 }
 return 0;
}
