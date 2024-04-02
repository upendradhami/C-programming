#include<stdio.h> 
#include<conio.h>
 int main()
 {
    FILE *ptr;
    ptr = fopen("hello.txt","w");
    char ch[100]="my name is upendra ";
    fprintf(ptr,"%s",ch);
    printf("%s ",ch);
    fclose(ptr);
 return 0;
 }