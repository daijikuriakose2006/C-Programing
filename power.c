/*
  Auther:  Daiji Kuriakose
  Date:    26/03/2025
  program: Power of a Number Using Recursion
*/
#include<stdio.h>
int power(int a, int b){
 if(b==0){
  return 1;
 }
 else if(b==1){
  return a;
 }
 else{
  return a*power(a,b-1);
 }
 }
int main(){
 int num,expo,result;
 printf("enter the number:");
 scanf("%d",&num);
 printf("Enter the exponent");
 scanf("%d",&expo);
 result=power(num,expo);
 printf("The result is:%d",result);
 return 0;
}
