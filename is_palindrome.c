#include <stdio.h>
int main() {
    int num,temp,rev=0,new;
    printf("Enter a number");
    scanf("%d",&num);
    new=num;
    while(num>0){
        temp=num%10;
        rev=(rev*10)+temp;
        num=num/10;
    }
    if(new==rev){
        printf("The number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0 ;
}