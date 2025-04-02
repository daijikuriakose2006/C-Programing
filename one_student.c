/* author: Daiji Kuriakose
   Date  : 2/04/2025
   program: Write a c program to store data of 1 student
*/
#include<stdio.h>
struct student{
 int roll_no;
 char name[20];
 float cgpa;
};
int main(){
 struct student s1;
  printf("Enter your name: ");
  scanf("%s",s1.name);
  printf("\nEnter the roll no: ");
  scanf("%d",&s1.roll_no);
  printf("Enter the cgpa: ");
  scanf("%f",&s1.cgpa);
  printf("\nName: %s",s1.name);
  printf("\nYour roll no %d",s1.roll_no);
  printf("\nyour cgpa:%f",s1.cgpa);
 return 0;
}
