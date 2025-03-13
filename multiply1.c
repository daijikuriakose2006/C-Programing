/* author: Daiji Kuriakose
   Date  : 13/03/2025
   program: C program to print product of two numbers
*/
#include<stdio.h>
int multiply(int a, int b){
return a*b;
}
int main(){
    int num1,num2,result;
    printf("enter first num");
    scanf("%d",&num1);
    printf("enter second num");
    scanf("%d",&num2);
    result=(multiply(num1,num2));
    printf("The product of %d and %d is %d ",num1,num2,result);
    return 0;
}
