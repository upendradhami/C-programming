// SALTING IS A PROCESS OF ADDING SOME CHARACTERS BETWEEN YOUR PASSWORD TO SECURE IT.
#include<stdio.h> 
#include<conio.h>
#include<string.h>
 int main()
 {
     char str1[50];
     printf("enter password: \n");
     scanf("%s",str1);
     
     char str2[] ="avc";
      strcat(str1,str2);
      puts(str1);

 return 0;
 } 