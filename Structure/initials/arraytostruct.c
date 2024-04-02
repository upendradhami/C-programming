#include<stdio.h> 
#include<conio.h>

typedef struct computerScienceStudent {
    char name[100];
    char address[100];
    char phone[15];
     
} cssb; // can be a shorter form for the name computerScienceStudent.
 
 int main()
 {
    cssb s1[200];
    printf("enter name, address and phone no. \n");
    fgets(s1[0].name,100,stdin);
    fgets(s1[0].address,100,stdin);
    fgets(s1[0].phone,100,stdin);
    fgets(s1[1].name,100,stdin);
    fgets(s1[1].address,100,stdin);
    fgets(s1[1].phone,100,stdin);

    printf("your name ,address and phone number is : \n");
    printf("%s \t %s \t %s \t",s1[0].name,s1[0].address, s1[0].phone);
    printf("%s \t %s \t %s \t",s1[1].name,s1[1].address, s1[1].phone);

 return 0;
 }