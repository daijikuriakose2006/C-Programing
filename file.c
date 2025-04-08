/* author: Daiji Kuriakose
   Date  : 08/04/2025
   program: Write a c program to create a file
*/
#include<stdio.h>
int main(){
 FILE *fp;
 fp=fopen("file.txt","w");
 putc('A',fp);
 fclose(fp);
 fp=fopen("file.txt","r");
 char ch=getc(fp);
 printf("%c",ch);
 fclose(fp);
 return 0;
}
