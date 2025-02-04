"""
author: Daiji Kuriakose
Date  : 5/02/2025
program: to check eligible for professional course.
"""
#include<stdio.h>
int main(){
int maths,physics,chemistry,sum,total;
printf("Enter your mark of maths: ");
scanf("%d",&maths);
printf("Enter your mark of physics: ");
scanf("%d",&physics);
printf("Enter your mark of chemistry: ");
scanf("%d",&chemistry);
sum=(maths+physics+chemistry);
total=maths+physics;
if (maths>=65 && physics>=55 && chemistry>=50 && sum>=190 || total>=140){
    printf("your are eligible for professional course");
}
else{
    printf("you are not eligible for professional course");
}
 return 0;
}