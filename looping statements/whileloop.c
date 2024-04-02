// to print the table of the number entered by the user.
#include<stdio.h> 
#include<conio.h>
 int main()
 {
    int i=1,n;

    printf("enter the number: \n ");
    scanf(" %d" ,&n);
    printf(" table is : \n");
    while(i<=10)
    {
        printf(" %d \n ", n*i);
       i++;
    }

    
 return 0;
 }