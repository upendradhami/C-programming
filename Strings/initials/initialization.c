#include<stdio.h> 
#include<conio.h>
 int main()
 {
    char name[]= {'u','p','e','n','d','r','a','\0'};
    char cas[]="upendra dhami";
    char *ram; // can be reinitialized ; but char ram[] cannot be reinitialized
    
    fgets(ram,100,stdin);
    puts(ram);
    
    scanf("%s",ram);  // again defined as we have used pointer string above
    puts(ram);
    
    puts(name);
    printf("%c \n",name[3]);

    puts(cas);
    printf("%s \n",cas);
   
    
 return 0;
 }