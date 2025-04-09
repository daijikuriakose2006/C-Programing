#include <stdio.h>
int main(){
  int words=0,sentance=0,character=0,lines_count=0;
    FILE*fp;
    fp=fopen("program.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)==1){
      character+=1;
      if(ch=='.'||ch==' '){
      words+=1;
      }
      if(ch=='.'){
        sentance+=1;
      }
      else if(ch=='\n'){
        lines_count+=1;
      }
    }
    printf("\ncharacter count=%d",character);
    printf("\nsentance count=%d",sentance);
    printf("\nwords count=%d",words);
    printf("\nlines count=%d",lines_count);
    fclose(fp);
    return 0;
}
