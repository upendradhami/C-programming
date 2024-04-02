#include<stdio.h> 
#include<conio.h>
 int main()
 {   
    int i,j;
    char a;
    char *ptr = &a;
    for(i='a'; i<='z'; i++)
    {
       *ptr = i;
       printf("%c \n",*ptr);
    }
     for(j='A'; j<='Z'; j++)
    {
       *ptr = j;
       printf("%c \n",*ptr);
    }
 return 0;
 }