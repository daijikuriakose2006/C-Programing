#include<stdio.h>
int main(){
    int num,i;
    int isPrime=1; // Assume the number is prime
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<2){
        isPrime=0;
    }
    else{
        for(i=2;i<num/2;i++){
            if(num%i==0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}