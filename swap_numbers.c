#include<stdio.h>
void swap(int *a,int*b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  int n=10,m=20;
  swap(&n,&m);
  printf("first number= %d, second number= %d",n,m);
  return 0;
}
