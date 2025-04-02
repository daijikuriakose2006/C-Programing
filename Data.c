/* author: Daiji Kuriakose
   Date  : 2/04/2025
   program: Write a c program to store data of 5 students
*/
#include<stdio.h>
typedef struct {
 int roll_no;
 char name[20];
 float cgpa;
}student;
int main(){
 student s[5];
 for(int i=0;i<5;i++){
  printf("\nEnter the roll no: ");
  scanf("%d",&s[i].roll_no);
  printf("Enter your name: ");
  scanf("%s",s[i].name);
  printf("Enter the cgpa: ");
  scanf("%f",&s[i].cgpa);
 }
 for(int i=0;i<5;i++){
   printf("\nYour roll no %d",s[i].roll_no);
   printf("\nName: %s",s[i].name);
   printf("\nyour cgpa:%f",s[i].cgpa);
 }
 return 0;
}
