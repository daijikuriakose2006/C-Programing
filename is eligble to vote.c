/* author: Daiji Kuriakose
   Date  : 5/02/2025
   program: to check eligible for casting your vote.
*/
#include<stdio.h>
int main(){
int age;
printf("Enter your age:");
scanf("%d",&age);
 if (age>=18){
     printf("Congratulation! You are eligible for casting your vote.");
 }
 else {
     printf("you are not eligible for casting your vote.");
 }
 return 0;
}
