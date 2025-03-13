/* author: Daiji Kuriakose
   Date  : 13/03/2025
   program: C program to chech weather the number is odd or even using function
*/
#include<stdio.h>
int iseven(int num){
    if(num%2==0){
        return 1;
    }else{
     return 0;
    }
}
int main(){
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(iseven(number)){
        printf("even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
