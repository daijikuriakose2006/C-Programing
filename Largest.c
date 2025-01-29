#include<stdio.h>
int main(){
 int num1,num2,num3;
 printf("Enter three numbers");
 scanf("%d%d%d",&num1,&num2,&num3);
 if (num1>num2 && num1>num3){
   printf("First number is larger=%d",num1);
   }
 if (num2>num1 && num2>num3){
   printf("second number is larger=%d",num2);
   }
 else
   printf("third number is larger=%d",num3);
 return 0;
}
