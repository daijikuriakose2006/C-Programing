#include<stdio.h>
int sum(int array[],int size){
 int sum=0;
 for(int i=0;i<size;i++){
  sum=sum+array[i];
 }
 return sum;
}
int main(){
 int size,i,result;
 printf("Enter the limit of the array");
 scanf("%d",&size);
 printf("Enter the elements in the array");
 int array[size];
 for(i=0;i<size;i++){
  scanf("%d",&array[i]);
 }
 result=sum(array,size);
 printf("The sum is : %d",result);
 return 0;
}
