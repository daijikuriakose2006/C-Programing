/*
author: Daiji Kuriakose
Date  : 05/02/2025
Program: To input elements into an array and find the maximum and minimum elements.
*/
#include<stdio.h>
int main(){
int limit,i,num,j;
 printf("Enter the limit: ");
 scanf("%d",&limit);
 int number[limit];
 printf("Enter the elements: ");
 for(i=0;i<limit;i++){
  scanf("%d",&number[i]);
 }
 printf("Enter the number to search: ");
 scanf("%d",&num);
 for(j=0;j<=limit;j++){
  if(num==number[j]){
   printf("the number %d is present",num);
   printf("\nThe position of the element is %d",j+1);
  }
 }
return 0;
}
