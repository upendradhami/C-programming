#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
   char ch;

    ptr = fopen("hello.txt","r"); // 'r' for reading mode 
    fscanf(ptr,"%c",&ch);
    printf("%c",ch);
    fclose(ptr);

    ptr=fopen("myname.txt","w"); // 'w' for writing mode
    fprintf(ptr,"%c",'m');
    fprintf(ptr,"%c",'y');
    fprintf(ptr,"%c",' ');
    fprintf(ptr,"%c",'h');
    fclose(ptr);

    return 0;
}