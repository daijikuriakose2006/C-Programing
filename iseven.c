/*
 auther: Daiji kuriakose
 Date:   15/03/2025
 question: program to chech the number is even or odd using function
 */
 #include<stdio.h>
void iseven(int a);
int main(){
 int num;
 printf("Enter the number");
 scanf("%d",&num);
 iseven(num);
 return 0;
}
void iseven(int a){
 if(a%2==0){
  printf("the number is even");
 }
 else{
  printf("The number is odd");
 }
}
