#include<stdio.h> 
#include<conio.h>
 int main()
 {
    char ch;
    printf(" enter any character ");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122){
        printf(" your given character is lowercase \n");
    }
     else if( ch>=65 && ch<=90) {
        printf(" your given character is uppercaser \n");
    }
    else
    { printf(" your character is not any alphabet ");}
 return 0;
 }