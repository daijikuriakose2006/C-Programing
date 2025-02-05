''' author: Daiji Kuriakose
   Date  : 05/02/2025
   Program: To input elements into an array and find the maximum and minimum elements.
'''
#include<stdio.h>
int main(){
 int limit,i,large,small,pos_large,pos_small,j;
 printf("Enter the limit");
 scanf("%d",&limit);
 int number[limit];
 for(i=0;i<=limit;i++){
  scanf("%d",&number[i]);
  }
 large=number[0];
 small=number[0];
 for(j=0;j<=limit;j++){
  if(number[j]>large){
   large=number[j];
   pos_large=j;
  }
  if(number[j]<small){
   small=number[j];
   pos_small=j;
  }
 }
 printf("\nThe largest number is %d and position is %d ",large,pos_large);
 printf("\nThe smallest number is %d and position is %d ",small,pos_small);
 return 0;
}
