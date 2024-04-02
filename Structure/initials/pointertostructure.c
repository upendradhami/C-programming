#include<stdio.h> 
#include<conio.h>

struct student {
    int enroll;
    int year;

};

 int main()
 {   struct student s1;
     struct student *ptr = &s1;
     printf("enter the enrollment and year : ");
     scanf("%d %d", &ptr->enroll, &ptr->year);
     printf(" enrollment and year are %d and %d \t", (*ptr).enroll, (*ptr).year);
     

  
 return 0;
 }