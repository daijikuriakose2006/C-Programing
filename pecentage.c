/*author: Daiji Kuriakose
  Date  : 29/01/2025
  program: to fint the pecentage of students mark.
*/
#include<stdio.h>
int main(){
char name[20];
int roll_no,mark1,mark2,mark3,total,sum;
float pecentage;
printf("Enter your name: ");
scanf("%s",&name);
printf("Enter your roll number: ");
scanf("%d",&roll_no);
printf("Enter your marks of three subject");
scanf("%d%d%d",&mark1,&mark2,&mark3);
printf("Enter the total of three subject");
scanf("%d",&total);
sum=mark1+mark2+mark3;
printf("you have sum of %d marks",sum);
pecentage=((float)sum/total)*100;
printf("\nCongratulation %s ! you have pecentage of %f",name,pecentage);
if(pecentage>=75){
    printf("First Class with Distinction ")
}
if(pecentage>+60&&pecentage<75){
    printf("First class")
}
else{
    printf("Second Class")
}
return 0;
}
