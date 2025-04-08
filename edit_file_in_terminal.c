/* author: Daiji Kuriakose
   Date  : 08/04/2025
   program: Write a c program to add charater from user to a file
*/
#include<stdio.h>
int main(){
 FILE *fp;
 char ch;
 fp=fopen("file.txt","w");
 while (ch=getc(stdin)1='z'){
  putc(ch,fp);
 }
 fclose(fp);
 fp=fopen("file.txt","r");
 while ((ch=getc(fp)!=EOF){
  printf("%c",ch);
 }
 fclose(fp);
 return 0;
}
