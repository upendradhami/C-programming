#include<stdio.h> 
#include<conio.h>

 int main()
 {
    FILE *ptr;
    char my[45]="my name is upendra ";
    char nam;
    ptr = fopen("myname.txt","w");
    //  fprintf(ptr,"%s",my);
    fputc("c",ptr);
     fclose(ptr);


     ptr = fopen("hello.txt","r");
      nam = fgetc(ptr);

    while(nam != EOF){
        printf("%c", nam);
        nam = fgetc(ptr);
    }
     printf("\n");
     fclose(ptr);

     return 0;
 }