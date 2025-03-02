/*author: Daiji Kuriakose
  Date  : 29/01/2025
  program: to fint the factorial of a given number.
*/
#include<stdio.h>
int main(){
int number,sum=1,i=1;
printf("Enter a number");
scanf("%d",&number);
 if (number>0){
   while(i<=number){
    sum=sum*i;
    i=i+1;
   }
   printf("The factorial of %d is %d\n", number, sum);
 }else{
   printf("Enter a positive number");
  }
 return 0;
}
