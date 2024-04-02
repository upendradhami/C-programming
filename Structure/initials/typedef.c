#include<stdio.h> 
#include<conio.h>

typedef struct student{
    char name[100];
    char address[100];
    char phone[36];
}stud;

 int main()
 {  stud s1={"upendra ", "kailali" , "9866703494"};
    printf("your name, address and phonee \n ");
    printf("%s \t %s \t %s \n",s1.name, s1.address, s1.phone);

 return 0;
 }