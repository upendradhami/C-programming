#include<stdio.h> 
#include<conio.h>
 int main()
 {
    char str[100];
    char ch;
    int i=0;
    printf("enter the characters : \n");
    while(ch !='\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;

    }
     str[i]= '\0';
     puts(str);
 return 0;
 }