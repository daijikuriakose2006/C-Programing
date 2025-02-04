"""
author: Daiji Kuriakose
Date  : 5/02/2025
program: to check profit in a market.
"""
#include<stdio.h>
int main(){
int cost,price,profit,loss;
printf("Enter cost of the product: ");
scanf("%d",&cost);
printf("Enter the selling price: ");
scanf("%d",&price);
profit=price-cost;
if(profit>0){
    printf("you have won of profit of %d rupees",profit);
}
else{
    loss=-(profit);
    printf("you have loss of %d rupees",loss);
}
 return 0;
}