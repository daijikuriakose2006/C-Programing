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
 int n;
 printf("Enter the number of students");
 scanf("%d",&n);
 student s[n];
 for(int i=0;i<n;i++){
  printf("Enter your name: ");
  scanf("%s",s[i].name);
  printf("\nEnter the roll no: ");
  scanf("%d",&s[i].roll_no);
  printf("Enter the cgpa: ");
  scanf("%f",&s[i].cgpa);
 }
 for(int i=0;i<n;i++){
   printf("\nName: %s",s[i].name);
   printf("\nYour roll no %d",s[i].roll_no);
   printf("\nyour cgpa:%f",s[i].cgpa);
 }
 return 0;
}
